// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_CPUINFO_COM_EOLWRAL_OSMONITOR_CORE_H_
#define FLATBUFFERS_GENERATED_CPUINFO_COM_EOLWRAL_OSMONITOR_CORE_H_

#include "flatbuffers/flatbuffers.h"


namespace com {
namespace eolwral {
namespace osmonitor {
namespace core {

struct cpuInfo;
struct cpuInfoList;

struct cpuInfo : private flatbuffers::Table {
  /// normal processes executing in user mode 
  uint64_t userTime() const { return GetField<uint64_t>(4, 0); }
  /// niced processes executing in user mode 
  uint64_t niceTime() const { return GetField<uint64_t>(6, 0); }
  /// processes executing in kernel mode 
  uint64_t systemTime() const { return GetField<uint64_t>(8, 0); }
  /// twiddling thumbs 
  uint64_t idleTime() const { return GetField<uint64_t>(10, 0); }
  /// waiting for I/O to complete 
  uint64_t ioWaitTime() const { return GetField<uint64_t>(12, 0); }
  /// servicing interrupts 
  uint64_t irqTime() const { return GetField<uint64_t>(14, 0); }
  /// servicing softirqs 
  uint64_t softIrqTime() const { return GetField<uint64_t>(16, 0); }
  /// CPU utilization 
  float cpuUtilization() const { return GetField<float>(18, 0); }
  /// Io utilization
  float ioUtilization() const { return GetField<float>(20, 0); }
  /// CPU Time 
  uint64_t cpuTime() const { return GetField<uint64_t>(22, 0); }
  /// CPU Number 
  uint32_t cpuNumber() const { return GetField<uint32_t>(24, 0); }
  /// CPU Offline 
  uint8_t offLine() const { return GetField<uint8_t>(26, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, 4 /* userTime */) &&
           VerifyField<uint64_t>(verifier, 6 /* niceTime */) &&
           VerifyField<uint64_t>(verifier, 8 /* systemTime */) &&
           VerifyField<uint64_t>(verifier, 10 /* idleTime */) &&
           VerifyField<uint64_t>(verifier, 12 /* ioWaitTime */) &&
           VerifyField<uint64_t>(verifier, 14 /* irqTime */) &&
           VerifyField<uint64_t>(verifier, 16 /* softIrqTime */) &&
           VerifyField<float>(verifier, 18 /* cpuUtilization */) &&
           VerifyField<float>(verifier, 20 /* ioUtilization */) &&
           VerifyField<uint64_t>(verifier, 22 /* cpuTime */) &&
           VerifyField<uint32_t>(verifier, 24 /* cpuNumber */) &&
           VerifyField<uint8_t>(verifier, 26 /* offLine */) &&
           verifier.EndTable();
  }
};

struct cpuInfoBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_userTime(uint64_t userTime) { fbb_.AddElement<uint64_t>(4, userTime, 0); }
  void add_niceTime(uint64_t niceTime) { fbb_.AddElement<uint64_t>(6, niceTime, 0); }
  void add_systemTime(uint64_t systemTime) { fbb_.AddElement<uint64_t>(8, systemTime, 0); }
  void add_idleTime(uint64_t idleTime) { fbb_.AddElement<uint64_t>(10, idleTime, 0); }
  void add_ioWaitTime(uint64_t ioWaitTime) { fbb_.AddElement<uint64_t>(12, ioWaitTime, 0); }
  void add_irqTime(uint64_t irqTime) { fbb_.AddElement<uint64_t>(14, irqTime, 0); }
  void add_softIrqTime(uint64_t softIrqTime) { fbb_.AddElement<uint64_t>(16, softIrqTime, 0); }
  void add_cpuUtilization(float cpuUtilization) { fbb_.AddElement<float>(18, cpuUtilization, 0); }
  void add_ioUtilization(float ioUtilization) { fbb_.AddElement<float>(20, ioUtilization, 0); }
  void add_cpuTime(uint64_t cpuTime) { fbb_.AddElement<uint64_t>(22, cpuTime, 0); }
  void add_cpuNumber(uint32_t cpuNumber) { fbb_.AddElement<uint32_t>(24, cpuNumber, 0); }
  void add_offLine(uint8_t offLine) { fbb_.AddElement<uint8_t>(26, offLine, 0); }
  cpuInfoBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  cpuInfoBuilder &operator=(const cpuInfoBuilder &);
  flatbuffers::Offset<cpuInfo> Finish() {
    auto o = flatbuffers::Offset<cpuInfo>(fbb_.EndTable(start_, 12));
    return o;
  }
};

inline flatbuffers::Offset<cpuInfo> CreatecpuInfo(flatbuffers::FlatBufferBuilder &_fbb,
   uint64_t userTime = 0,
   uint64_t niceTime = 0,
   uint64_t systemTime = 0,
   uint64_t idleTime = 0,
   uint64_t ioWaitTime = 0,
   uint64_t irqTime = 0,
   uint64_t softIrqTime = 0,
   float cpuUtilization = 0,
   float ioUtilization = 0,
   uint64_t cpuTime = 0,
   uint32_t cpuNumber = 0,
   uint8_t offLine = 0) {
  cpuInfoBuilder builder_(_fbb);
  builder_.add_cpuTime(cpuTime);
  builder_.add_softIrqTime(softIrqTime);
  builder_.add_irqTime(irqTime);
  builder_.add_ioWaitTime(ioWaitTime);
  builder_.add_idleTime(idleTime);
  builder_.add_systemTime(systemTime);
  builder_.add_niceTime(niceTime);
  builder_.add_userTime(userTime);
  builder_.add_cpuNumber(cpuNumber);
  builder_.add_ioUtilization(ioUtilization);
  builder_.add_cpuUtilization(cpuUtilization);
  builder_.add_offLine(offLine);
  return builder_.Finish();
}

struct cpuInfoList : private flatbuffers::Table {
  const flatbuffers::Vector<flatbuffers::Offset<cpuInfo>> *list() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<cpuInfo>> *>(4); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* list */) &&
           verifier.Verify(list()) &&
           verifier.VerifyVectorOfTables(list()) &&
           verifier.EndTable();
  }
};

struct cpuInfoListBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_list(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<cpuInfo>>> list) { fbb_.AddOffset(4, list); }
  cpuInfoListBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  cpuInfoListBuilder &operator=(const cpuInfoListBuilder &);
  flatbuffers::Offset<cpuInfoList> Finish() {
    auto o = flatbuffers::Offset<cpuInfoList>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<cpuInfoList> CreatecpuInfoList(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<cpuInfo>>> list = 0) {
  cpuInfoListBuilder builder_(_fbb);
  builder_.add_list(list);
  return builder_.Finish();
}

inline const cpuInfoList *GetcpuInfoList(const void *buf) { return flatbuffers::GetRoot<cpuInfoList>(buf); }

inline bool VerifycpuInfoListBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<cpuInfoList>(); }

inline void FinishcpuInfoListBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<cpuInfoList> root) { fbb.Finish(root); }

}  // namespace core
}  // namespace osmonitor
}  // namespace eolwral
}  // namespace com

#endif  // FLATBUFFERS_GENERATED_CPUINFO_COM_EOLWRAL_OSMONITOR_CORE_H_