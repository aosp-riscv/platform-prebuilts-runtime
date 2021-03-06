// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_PERF_EVENTS_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_PERF_EVENTS_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/field_writer.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {

class PerfEvents_Timebase;
class PerfEvents_Tracepoint;
enum PerfEvents_Counter : int32_t;

enum PerfEvents_Counter : int32_t {
  PerfEvents_Counter_UNKNOWN_COUNTER = 0,
  PerfEvents_Counter_SW_CPU_CLOCK = 1,
  PerfEvents_Counter_SW_PAGE_FAULTS = 2,
  PerfEvents_Counter_HW_CPU_CYCLES = 10,
  PerfEvents_Counter_HW_INSTRUCTIONS = 11,
};

const PerfEvents_Counter PerfEvents_Counter_MIN = PerfEvents_Counter_UNKNOWN_COUNTER;
const PerfEvents_Counter PerfEvents_Counter_MAX = PerfEvents_Counter_HW_INSTRUCTIONS;

class PerfEvents_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/0, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  PerfEvents_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit PerfEvents_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit PerfEvents_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
};

class PerfEvents : public ::protozero::Message {
 public:
  using Decoder = PerfEvents_Decoder;
  using Timebase = ::perfetto::protos::pbzero::PerfEvents_Timebase;
  using Tracepoint = ::perfetto::protos::pbzero::PerfEvents_Tracepoint;
  using Counter = ::perfetto::protos::pbzero::PerfEvents_Counter;
  static const Counter UNKNOWN_COUNTER = PerfEvents_Counter_UNKNOWN_COUNTER;
  static const Counter SW_CPU_CLOCK = PerfEvents_Counter_SW_CPU_CLOCK;
  static const Counter SW_PAGE_FAULTS = PerfEvents_Counter_SW_PAGE_FAULTS;
  static const Counter HW_CPU_CYCLES = PerfEvents_Counter_HW_CPU_CYCLES;
  static const Counter HW_INSTRUCTIONS = PerfEvents_Counter_HW_INSTRUCTIONS;
};

class PerfEvents_Tracepoint_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  PerfEvents_Tracepoint_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit PerfEvents_Tracepoint_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit PerfEvents_Tracepoint_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_name() const { return at<1>().valid(); }
  ::protozero::ConstChars name() const { return at<1>().as_string(); }
  bool has_filter() const { return at<2>().valid(); }
  ::protozero::ConstChars filter() const { return at<2>().as_string(); }
};

class PerfEvents_Tracepoint : public ::protozero::Message {
 public:
  using Decoder = PerfEvents_Tracepoint_Decoder;
  enum : int32_t {
    kNameFieldNumber = 1,
    kFilterFieldNumber = 2,
  };

  using FieldMetadata_Name =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      PerfEvents_Tracepoint>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Name kName() { return {}; }
  void set_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Name::kFieldId, data, size);
  }
  void set_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Name::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Filter =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      PerfEvents_Tracepoint>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Filter kFilter() { return {}; }
  void set_filter(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Filter::kFieldId, data, size);
  }
  void set_filter(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Filter::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }
};

class PerfEvents_Timebase_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  PerfEvents_Timebase_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit PerfEvents_Timebase_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit PerfEvents_Timebase_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_frequency() const { return at<2>().valid(); }
  uint64_t frequency() const { return at<2>().as_uint64(); }
  bool has_period() const { return at<1>().valid(); }
  uint64_t period() const { return at<1>().as_uint64(); }
  bool has_counter() const { return at<4>().valid(); }
  int32_t counter() const { return at<4>().as_int32(); }
  bool has_tracepoint() const { return at<3>().valid(); }
  ::protozero::ConstBytes tracepoint() const { return at<3>().as_bytes(); }
};

class PerfEvents_Timebase : public ::protozero::Message {
 public:
  using Decoder = PerfEvents_Timebase_Decoder;
  enum : int32_t {
    kFrequencyFieldNumber = 2,
    kPeriodFieldNumber = 1,
    kCounterFieldNumber = 4,
    kTracepointFieldNumber = 3,
  };

  using FieldMetadata_Frequency =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      PerfEvents_Timebase>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Frequency kFrequency() { return {}; }
  void set_frequency(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Frequency::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Period =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      PerfEvents_Timebase>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Period kPeriod() { return {}; }
  void set_period(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Period::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Counter =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      ::perfetto::protos::pbzero::PerfEvents_Counter,
      PerfEvents_Timebase>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Counter kCounter() { return {}; }
  void set_counter(::perfetto::protos::pbzero::PerfEvents_Counter value) {
    static constexpr uint32_t field_id = FieldMetadata_Counter::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Tracepoint =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      PerfEvents_Tracepoint,
      PerfEvents_Timebase>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Tracepoint kTracepoint() { return {}; }
  template <typename T = PerfEvents_Tracepoint> T* set_tracepoint() {
    return BeginNestedMessage<T>(3);
  }

};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
