PROGRAMS = TestString TestQueue TestVector TestHashMap TestJSON

all: $(PROGRAMS)

CXXFLAGS = -std=c++17 -Wall -Wextra

TestString: TestString.cpp ../String.cpp ../StringImpl.cpp ../StringBuilder.cpp ../StringView.cpp TestHelpers.h
	$(CXX) $(CXXFLAGS) -I../ -I../../ -o $@ TestString.cpp ../String.cpp ../StringImpl.cpp ../StringBuilder.cpp ../StringView.cpp

TestQueue: TestQueue.cpp ../String.cpp ../StringImpl.cpp ../StringBuilder.cpp ../StringView.cpp TestHelpers.h
	$(CXX) $(CXXFLAGS) -I../ -I../../ -o $@ TestQueue.cpp ../String.cpp ../StringImpl.cpp ../StringBuilder.cpp ../StringView.cpp

TestVector: TestVector.cpp ../String.cpp ../StringImpl.cpp ../StringBuilder.cpp ../StringView.cpp TestHelpers.h
	$(CXX) $(CXXFLAGS) -I../ -I../../ -o $@ TestVector.cpp ../String.cpp ../StringImpl.cpp ../StringBuilder.cpp ../StringView.cpp

TestHashMap: TestHashMap.cpp ../String.cpp ../StringImpl.cpp ../StringBuilder.cpp ../StringView.cpp TestHelpers.h
	$(CXX) $(CXXFLAGS) -I../ -I../../ -o $@ TestHashMap.cpp ../String.cpp ../StringImpl.cpp ../StringBuilder.cpp ../StringView.cpp

TestJSON: TestJSON.cpp ../String.cpp ../StringImpl.cpp ../StringBuilder.cpp ../StringView.cpp TestHelpers.h ../JsonObject.cpp ../JsonValue.cpp ../JsonArray.cpp ../JsonParser.cpp
	$(CXX) $(CXXFLAGS) -I../ -I../../ -o $@ TestJSON.cpp ../String.cpp ../StringImpl.cpp ../StringBuilder.cpp ../StringView.cpp ../JsonObject.cpp ../JsonValue.cpp ../JsonArray.cpp ../JsonParser.cpp

clean:
	rm -f $(PROGRAMS)
