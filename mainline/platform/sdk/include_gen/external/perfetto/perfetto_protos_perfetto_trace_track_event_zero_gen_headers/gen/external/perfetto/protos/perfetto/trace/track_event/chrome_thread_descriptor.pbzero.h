// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_THREAD_DESCRIPTOR_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_THREAD_DESCRIPTOR_PROTO_H_

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

enum ChromeThreadDescriptor_ThreadType : int32_t;

enum ChromeThreadDescriptor_ThreadType : int32_t {
  ChromeThreadDescriptor_ThreadType_THREAD_UNSPECIFIED = 0,
  ChromeThreadDescriptor_ThreadType_THREAD_MAIN = 1,
  ChromeThreadDescriptor_ThreadType_THREAD_IO = 2,
  ChromeThreadDescriptor_ThreadType_THREAD_POOL_BG_WORKER = 3,
  ChromeThreadDescriptor_ThreadType_THREAD_POOL_FG_WORKER = 4,
  ChromeThreadDescriptor_ThreadType_THREAD_POOL_FG_BLOCKING = 5,
  ChromeThreadDescriptor_ThreadType_THREAD_POOL_BG_BLOCKING = 6,
  ChromeThreadDescriptor_ThreadType_THREAD_POOL_SERVICE = 7,
  ChromeThreadDescriptor_ThreadType_THREAD_COMPOSITOR = 8,
  ChromeThreadDescriptor_ThreadType_THREAD_VIZ_COMPOSITOR = 9,
  ChromeThreadDescriptor_ThreadType_THREAD_COMPOSITOR_WORKER = 10,
  ChromeThreadDescriptor_ThreadType_THREAD_SERVICE_WORKER = 11,
  ChromeThreadDescriptor_ThreadType_THREAD_NETWORK_SERVICE = 12,
  ChromeThreadDescriptor_ThreadType_THREAD_CHILD_IO = 13,
  ChromeThreadDescriptor_ThreadType_THREAD_BROWSER_IO = 14,
  ChromeThreadDescriptor_ThreadType_THREAD_BROWSER_MAIN = 15,
  ChromeThreadDescriptor_ThreadType_THREAD_RENDERER_MAIN = 16,
  ChromeThreadDescriptor_ThreadType_THREAD_UTILITY_MAIN = 17,
  ChromeThreadDescriptor_ThreadType_THREAD_GPU_MAIN = 18,
  ChromeThreadDescriptor_ThreadType_THREAD_CACHE_BLOCKFILE = 19,
  ChromeThreadDescriptor_ThreadType_THREAD_MEDIA = 20,
  ChromeThreadDescriptor_ThreadType_THREAD_AUDIO_OUTPUTDEVICE = 21,
  ChromeThreadDescriptor_ThreadType_THREAD_AUDIO_INPUTDEVICE = 22,
  ChromeThreadDescriptor_ThreadType_THREAD_GPU_MEMORY = 23,
  ChromeThreadDescriptor_ThreadType_THREAD_GPU_VSYNC = 24,
  ChromeThreadDescriptor_ThreadType_THREAD_DXA_VIDEODECODER = 25,
  ChromeThreadDescriptor_ThreadType_THREAD_BROWSER_WATCHDOG = 26,
  ChromeThreadDescriptor_ThreadType_THREAD_WEBRTC_NETWORK = 27,
  ChromeThreadDescriptor_ThreadType_THREAD_WINDOW_OWNER = 28,
  ChromeThreadDescriptor_ThreadType_THREAD_WEBRTC_SIGNALING = 29,
  ChromeThreadDescriptor_ThreadType_THREAD_WEBRTC_WORKER = 30,
  ChromeThreadDescriptor_ThreadType_THREAD_PPAPI_MAIN = 31,
  ChromeThreadDescriptor_ThreadType_THREAD_GPU_WATCHDOG = 32,
  ChromeThreadDescriptor_ThreadType_THREAD_SWAPPER = 33,
  ChromeThreadDescriptor_ThreadType_THREAD_GAMEPAD_POLLING = 34,
  ChromeThreadDescriptor_ThreadType_THREAD_WEBCRYPTO = 35,
  ChromeThreadDescriptor_ThreadType_THREAD_DATABASE = 36,
  ChromeThreadDescriptor_ThreadType_THREAD_PROXYRESOLVER = 37,
  ChromeThreadDescriptor_ThreadType_THREAD_DEVTOOLSADB = 38,
  ChromeThreadDescriptor_ThreadType_THREAD_NETWORKCONFIGWATCHER = 39,
  ChromeThreadDescriptor_ThreadType_THREAD_WASAPI_RENDER = 40,
  ChromeThreadDescriptor_ThreadType_THREAD_MEMORY_INFRA = 50,
  ChromeThreadDescriptor_ThreadType_THREAD_SAMPLING_PROFILER = 51,
};

const ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor_ThreadType_MIN = ChromeThreadDescriptor_ThreadType_THREAD_UNSPECIFIED;
const ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor_ThreadType_MAX = ChromeThreadDescriptor_ThreadType_THREAD_SAMPLING_PROFILER;

class ChromeThreadDescriptor_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  ChromeThreadDescriptor_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ChromeThreadDescriptor_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ChromeThreadDescriptor_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_thread_type() const { return at<1>().valid(); }
  int32_t thread_type() const { return at<1>().as_int32(); }
  bool has_legacy_sort_index() const { return at<2>().valid(); }
  int32_t legacy_sort_index() const { return at<2>().as_int32(); }
};

class ChromeThreadDescriptor : public ::protozero::Message {
 public:
  using Decoder = ChromeThreadDescriptor_Decoder;
  enum : int32_t {
    kThreadTypeFieldNumber = 1,
    kLegacySortIndexFieldNumber = 2,
  };
  using ThreadType = ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType;
  static const ThreadType THREAD_UNSPECIFIED = ChromeThreadDescriptor_ThreadType_THREAD_UNSPECIFIED;
  static const ThreadType THREAD_MAIN = ChromeThreadDescriptor_ThreadType_THREAD_MAIN;
  static const ThreadType THREAD_IO = ChromeThreadDescriptor_ThreadType_THREAD_IO;
  static const ThreadType THREAD_POOL_BG_WORKER = ChromeThreadDescriptor_ThreadType_THREAD_POOL_BG_WORKER;
  static const ThreadType THREAD_POOL_FG_WORKER = ChromeThreadDescriptor_ThreadType_THREAD_POOL_FG_WORKER;
  static const ThreadType THREAD_POOL_FG_BLOCKING = ChromeThreadDescriptor_ThreadType_THREAD_POOL_FG_BLOCKING;
  static const ThreadType THREAD_POOL_BG_BLOCKING = ChromeThreadDescriptor_ThreadType_THREAD_POOL_BG_BLOCKING;
  static const ThreadType THREAD_POOL_SERVICE = ChromeThreadDescriptor_ThreadType_THREAD_POOL_SERVICE;
  static const ThreadType THREAD_COMPOSITOR = ChromeThreadDescriptor_ThreadType_THREAD_COMPOSITOR;
  static const ThreadType THREAD_VIZ_COMPOSITOR = ChromeThreadDescriptor_ThreadType_THREAD_VIZ_COMPOSITOR;
  static const ThreadType THREAD_COMPOSITOR_WORKER = ChromeThreadDescriptor_ThreadType_THREAD_COMPOSITOR_WORKER;
  static const ThreadType THREAD_SERVICE_WORKER = ChromeThreadDescriptor_ThreadType_THREAD_SERVICE_WORKER;
  static const ThreadType THREAD_NETWORK_SERVICE = ChromeThreadDescriptor_ThreadType_THREAD_NETWORK_SERVICE;
  static const ThreadType THREAD_CHILD_IO = ChromeThreadDescriptor_ThreadType_THREAD_CHILD_IO;
  static const ThreadType THREAD_BROWSER_IO = ChromeThreadDescriptor_ThreadType_THREAD_BROWSER_IO;
  static const ThreadType THREAD_BROWSER_MAIN = ChromeThreadDescriptor_ThreadType_THREAD_BROWSER_MAIN;
  static const ThreadType THREAD_RENDERER_MAIN = ChromeThreadDescriptor_ThreadType_THREAD_RENDERER_MAIN;
  static const ThreadType THREAD_UTILITY_MAIN = ChromeThreadDescriptor_ThreadType_THREAD_UTILITY_MAIN;
  static const ThreadType THREAD_GPU_MAIN = ChromeThreadDescriptor_ThreadType_THREAD_GPU_MAIN;
  static const ThreadType THREAD_CACHE_BLOCKFILE = ChromeThreadDescriptor_ThreadType_THREAD_CACHE_BLOCKFILE;
  static const ThreadType THREAD_MEDIA = ChromeThreadDescriptor_ThreadType_THREAD_MEDIA;
  static const ThreadType THREAD_AUDIO_OUTPUTDEVICE = ChromeThreadDescriptor_ThreadType_THREAD_AUDIO_OUTPUTDEVICE;
  static const ThreadType THREAD_AUDIO_INPUTDEVICE = ChromeThreadDescriptor_ThreadType_THREAD_AUDIO_INPUTDEVICE;
  static const ThreadType THREAD_GPU_MEMORY = ChromeThreadDescriptor_ThreadType_THREAD_GPU_MEMORY;
  static const ThreadType THREAD_GPU_VSYNC = ChromeThreadDescriptor_ThreadType_THREAD_GPU_VSYNC;
  static const ThreadType THREAD_DXA_VIDEODECODER = ChromeThreadDescriptor_ThreadType_THREAD_DXA_VIDEODECODER;
  static const ThreadType THREAD_BROWSER_WATCHDOG = ChromeThreadDescriptor_ThreadType_THREAD_BROWSER_WATCHDOG;
  static const ThreadType THREAD_WEBRTC_NETWORK = ChromeThreadDescriptor_ThreadType_THREAD_WEBRTC_NETWORK;
  static const ThreadType THREAD_WINDOW_OWNER = ChromeThreadDescriptor_ThreadType_THREAD_WINDOW_OWNER;
  static const ThreadType THREAD_WEBRTC_SIGNALING = ChromeThreadDescriptor_ThreadType_THREAD_WEBRTC_SIGNALING;
  static const ThreadType THREAD_WEBRTC_WORKER = ChromeThreadDescriptor_ThreadType_THREAD_WEBRTC_WORKER;
  static const ThreadType THREAD_PPAPI_MAIN = ChromeThreadDescriptor_ThreadType_THREAD_PPAPI_MAIN;
  static const ThreadType THREAD_GPU_WATCHDOG = ChromeThreadDescriptor_ThreadType_THREAD_GPU_WATCHDOG;
  static const ThreadType THREAD_SWAPPER = ChromeThreadDescriptor_ThreadType_THREAD_SWAPPER;
  static const ThreadType THREAD_GAMEPAD_POLLING = ChromeThreadDescriptor_ThreadType_THREAD_GAMEPAD_POLLING;
  static const ThreadType THREAD_WEBCRYPTO = ChromeThreadDescriptor_ThreadType_THREAD_WEBCRYPTO;
  static const ThreadType THREAD_DATABASE = ChromeThreadDescriptor_ThreadType_THREAD_DATABASE;
  static const ThreadType THREAD_PROXYRESOLVER = ChromeThreadDescriptor_ThreadType_THREAD_PROXYRESOLVER;
  static const ThreadType THREAD_DEVTOOLSADB = ChromeThreadDescriptor_ThreadType_THREAD_DEVTOOLSADB;
  static const ThreadType THREAD_NETWORKCONFIGWATCHER = ChromeThreadDescriptor_ThreadType_THREAD_NETWORKCONFIGWATCHER;
  static const ThreadType THREAD_WASAPI_RENDER = ChromeThreadDescriptor_ThreadType_THREAD_WASAPI_RENDER;
  static const ThreadType THREAD_MEMORY_INFRA = ChromeThreadDescriptor_ThreadType_THREAD_MEMORY_INFRA;
  static const ThreadType THREAD_SAMPLING_PROFILER = ChromeThreadDescriptor_ThreadType_THREAD_SAMPLING_PROFILER;

  using FieldMetadata_ThreadType =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType,
      ChromeThreadDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_ThreadType kThreadType() { return {}; }
  void set_thread_type(::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType value) {
    static constexpr uint32_t field_id = FieldMetadata_ThreadType::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_LegacySortIndex =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ChromeThreadDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_LegacySortIndex kLegacySortIndex() { return {}; }
  void set_legacy_sort_index(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_LegacySortIndex::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.