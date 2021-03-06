#include <LibHTML/Layout/LayoutDocument.h>

LayoutDocument::LayoutDocument(const Document& document)
    : LayoutNode(&document)
{
}

LayoutDocument::~LayoutDocument()
{
}

void LayoutDocument::layout()
{
    rect().set_width(style().size().width());
    LayoutNode::layout();
}
