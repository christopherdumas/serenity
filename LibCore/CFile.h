#pragma once

#include <AK/AKString.h>
#include <LibCore/CIODevice.h>

class CFile final : public CIODevice {
public:
    CFile() {}
    explicit CFile(const StringView&);
    virtual ~CFile() override;

    String filename() const { return m_filename; }
    void set_filename(const StringView& filename) { m_filename = filename; }

    virtual bool open(CIODevice::OpenMode) override;

    enum class ShouldCloseFileDescription {
        No = 0,
        Yes
    };
    bool open(int fd, CIODevice::OpenMode, ShouldCloseFileDescription);

    virtual const char* class_name() const override { return "CFile"; }

private:
    String m_filename;
    ShouldCloseFileDescription m_should_close_file_descriptor { ShouldCloseFileDescription::Yes };
};
