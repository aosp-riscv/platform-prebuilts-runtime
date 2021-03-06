// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/gpu/vulkan_api_event.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fgpu_2fvulkan_5fapi_5fevent_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fgpu_2fvulkan_5fapi_5fevent_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fgpu_2fvulkan_5fapi_5fevent_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fgpu_2fvulkan_5fapi_5fevent_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
namespace perfetto {
namespace protos {
class VulkanApiEvent;
class VulkanApiEventDefaultTypeInternal;
extern VulkanApiEventDefaultTypeInternal _VulkanApiEvent_default_instance_;
class VulkanApiEvent_VkDebugUtilsObjectName;
class VulkanApiEvent_VkDebugUtilsObjectNameDefaultTypeInternal;
extern VulkanApiEvent_VkDebugUtilsObjectNameDefaultTypeInternal _VulkanApiEvent_VkDebugUtilsObjectName_default_instance_;
class VulkanApiEvent_VkQueueSubmit;
class VulkanApiEvent_VkQueueSubmitDefaultTypeInternal;
extern VulkanApiEvent_VkQueueSubmitDefaultTypeInternal _VulkanApiEvent_VkQueueSubmit_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::VulkanApiEvent* Arena::CreateMaybeMessage<::perfetto::protos::VulkanApiEvent>(Arena*);
template<> ::perfetto::protos::VulkanApiEvent_VkDebugUtilsObjectName* Arena::CreateMaybeMessage<::perfetto::protos::VulkanApiEvent_VkDebugUtilsObjectName>(Arena*);
template<> ::perfetto::protos::VulkanApiEvent_VkQueueSubmit* Arena::CreateMaybeMessage<::perfetto::protos::VulkanApiEvent_VkQueueSubmit>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class VulkanApiEvent_VkDebugUtilsObjectName :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName) */ {
 public:
  VulkanApiEvent_VkDebugUtilsObjectName();
  virtual ~VulkanApiEvent_VkDebugUtilsObjectName();

  VulkanApiEvent_VkDebugUtilsObjectName(const VulkanApiEvent_VkDebugUtilsObjectName& from);
  VulkanApiEvent_VkDebugUtilsObjectName(VulkanApiEvent_VkDebugUtilsObjectName&& from) noexcept
    : VulkanApiEvent_VkDebugUtilsObjectName() {
    *this = ::std::move(from);
  }

  inline VulkanApiEvent_VkDebugUtilsObjectName& operator=(const VulkanApiEvent_VkDebugUtilsObjectName& from) {
    CopyFrom(from);
    return *this;
  }
  inline VulkanApiEvent_VkDebugUtilsObjectName& operator=(VulkanApiEvent_VkDebugUtilsObjectName&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const VulkanApiEvent_VkDebugUtilsObjectName& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VulkanApiEvent_VkDebugUtilsObjectName* internal_default_instance() {
    return reinterpret_cast<const VulkanApiEvent_VkDebugUtilsObjectName*>(
               &_VulkanApiEvent_VkDebugUtilsObjectName_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(VulkanApiEvent_VkDebugUtilsObjectName& a, VulkanApiEvent_VkDebugUtilsObjectName& b) {
    a.Swap(&b);
  }
  inline void Swap(VulkanApiEvent_VkDebugUtilsObjectName* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline VulkanApiEvent_VkDebugUtilsObjectName* New() const final {
    return CreateMaybeMessage<VulkanApiEvent_VkDebugUtilsObjectName>(nullptr);
  }

  VulkanApiEvent_VkDebugUtilsObjectName* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<VulkanApiEvent_VkDebugUtilsObjectName>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const VulkanApiEvent_VkDebugUtilsObjectName& from);
  void MergeFrom(const VulkanApiEvent_VkDebugUtilsObjectName& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(VulkanApiEvent_VkDebugUtilsObjectName* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kObjectNameFieldNumber = 5,
    kVkDeviceFieldNumber = 2,
    kPidFieldNumber = 1,
    kObjectTypeFieldNumber = 3,
    kObjectFieldNumber = 4,
  };
  // optional string object_name = 5;
  bool has_object_name() const;
  void clear_object_name();
  const std::string& object_name() const;
  void set_object_name(const std::string& value);
  void set_object_name(std::string&& value);
  void set_object_name(const char* value);
  void set_object_name(const char* value, size_t size);
  std::string* mutable_object_name();
  std::string* release_object_name();
  void set_allocated_object_name(std::string* object_name);

  // optional uint64 vk_device = 2;
  bool has_vk_device() const;
  void clear_vk_device();
  ::PROTOBUF_NAMESPACE_ID::uint64 vk_device() const;
  void set_vk_device(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // optional uint32 pid = 1;
  bool has_pid() const;
  void clear_pid();
  ::PROTOBUF_NAMESPACE_ID::uint32 pid() const;
  void set_pid(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // optional int32 object_type = 3;
  bool has_object_type() const;
  void clear_object_type();
  ::PROTOBUF_NAMESPACE_ID::int32 object_type() const;
  void set_object_type(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional uint64 object = 4;
  bool has_object() const;
  void clear_object();
  ::PROTOBUF_NAMESPACE_ID::uint64 object() const;
  void set_object(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr object_name_;
  ::PROTOBUF_NAMESPACE_ID::uint64 vk_device_;
  ::PROTOBUF_NAMESPACE_ID::uint32 pid_;
  ::PROTOBUF_NAMESPACE_ID::int32 object_type_;
  ::PROTOBUF_NAMESPACE_ID::uint64 object_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fgpu_2fvulkan_5fapi_5fevent_2eproto;
};
// -------------------------------------------------------------------

class VulkanApiEvent_VkQueueSubmit :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.VulkanApiEvent.VkQueueSubmit) */ {
 public:
  VulkanApiEvent_VkQueueSubmit();
  virtual ~VulkanApiEvent_VkQueueSubmit();

  VulkanApiEvent_VkQueueSubmit(const VulkanApiEvent_VkQueueSubmit& from);
  VulkanApiEvent_VkQueueSubmit(VulkanApiEvent_VkQueueSubmit&& from) noexcept
    : VulkanApiEvent_VkQueueSubmit() {
    *this = ::std::move(from);
  }

  inline VulkanApiEvent_VkQueueSubmit& operator=(const VulkanApiEvent_VkQueueSubmit& from) {
    CopyFrom(from);
    return *this;
  }
  inline VulkanApiEvent_VkQueueSubmit& operator=(VulkanApiEvent_VkQueueSubmit&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const VulkanApiEvent_VkQueueSubmit& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VulkanApiEvent_VkQueueSubmit* internal_default_instance() {
    return reinterpret_cast<const VulkanApiEvent_VkQueueSubmit*>(
               &_VulkanApiEvent_VkQueueSubmit_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(VulkanApiEvent_VkQueueSubmit& a, VulkanApiEvent_VkQueueSubmit& b) {
    a.Swap(&b);
  }
  inline void Swap(VulkanApiEvent_VkQueueSubmit* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline VulkanApiEvent_VkQueueSubmit* New() const final {
    return CreateMaybeMessage<VulkanApiEvent_VkQueueSubmit>(nullptr);
  }

  VulkanApiEvent_VkQueueSubmit* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<VulkanApiEvent_VkQueueSubmit>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const VulkanApiEvent_VkQueueSubmit& from);
  void MergeFrom(const VulkanApiEvent_VkQueueSubmit& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(VulkanApiEvent_VkQueueSubmit* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.VulkanApiEvent.VkQueueSubmit";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kVkCommandBuffersFieldNumber = 5,
    kDurationNsFieldNumber = 1,
    kPidFieldNumber = 2,
    kTidFieldNumber = 3,
    kVkQueueFieldNumber = 4,
    kSubmissionIdFieldNumber = 6,
  };
  // repeated uint64 vk_command_buffers = 5;
  int vk_command_buffers_size() const;
  void clear_vk_command_buffers();
  ::PROTOBUF_NAMESPACE_ID::uint64 vk_command_buffers(int index) const;
  void set_vk_command_buffers(int index, ::PROTOBUF_NAMESPACE_ID::uint64 value);
  void add_vk_command_buffers(::PROTOBUF_NAMESPACE_ID::uint64 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint64 >&
      vk_command_buffers() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint64 >*
      mutable_vk_command_buffers();

  // optional uint64 duration_ns = 1;
  bool has_duration_ns() const;
  void clear_duration_ns();
  ::PROTOBUF_NAMESPACE_ID::uint64 duration_ns() const;
  void set_duration_ns(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // optional uint32 pid = 2;
  bool has_pid() const;
  void clear_pid();
  ::PROTOBUF_NAMESPACE_ID::uint32 pid() const;
  void set_pid(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // optional uint32 tid = 3;
  bool has_tid() const;
  void clear_tid();
  ::PROTOBUF_NAMESPACE_ID::uint32 tid() const;
  void set_tid(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // optional uint64 vk_queue = 4;
  bool has_vk_queue() const;
  void clear_vk_queue();
  ::PROTOBUF_NAMESPACE_ID::uint64 vk_queue() const;
  void set_vk_queue(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // optional uint32 submission_id = 6;
  bool has_submission_id() const;
  void clear_submission_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 submission_id() const;
  void set_submission_id(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.VulkanApiEvent.VkQueueSubmit)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint64 > vk_command_buffers_;
  ::PROTOBUF_NAMESPACE_ID::uint64 duration_ns_;
  ::PROTOBUF_NAMESPACE_ID::uint32 pid_;
  ::PROTOBUF_NAMESPACE_ID::uint32 tid_;
  ::PROTOBUF_NAMESPACE_ID::uint64 vk_queue_;
  ::PROTOBUF_NAMESPACE_ID::uint32 submission_id_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fgpu_2fvulkan_5fapi_5fevent_2eproto;
};
// -------------------------------------------------------------------

class VulkanApiEvent :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.VulkanApiEvent) */ {
 public:
  VulkanApiEvent();
  virtual ~VulkanApiEvent();

  VulkanApiEvent(const VulkanApiEvent& from);
  VulkanApiEvent(VulkanApiEvent&& from) noexcept
    : VulkanApiEvent() {
    *this = ::std::move(from);
  }

  inline VulkanApiEvent& operator=(const VulkanApiEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline VulkanApiEvent& operator=(VulkanApiEvent&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const VulkanApiEvent& default_instance();

  enum EventCase {
    kVkDebugUtilsObjectName = 1,
    kVkQueueSubmit = 2,
    EVENT_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VulkanApiEvent* internal_default_instance() {
    return reinterpret_cast<const VulkanApiEvent*>(
               &_VulkanApiEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(VulkanApiEvent& a, VulkanApiEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(VulkanApiEvent* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline VulkanApiEvent* New() const final {
    return CreateMaybeMessage<VulkanApiEvent>(nullptr);
  }

  VulkanApiEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<VulkanApiEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const VulkanApiEvent& from);
  void MergeFrom(const VulkanApiEvent& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(VulkanApiEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.VulkanApiEvent";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  typedef VulkanApiEvent_VkDebugUtilsObjectName VkDebugUtilsObjectName;
  typedef VulkanApiEvent_VkQueueSubmit VkQueueSubmit;

  // accessors -------------------------------------------------------

  enum : int {
    kVkDebugUtilsObjectNameFieldNumber = 1,
    kVkQueueSubmitFieldNumber = 2,
  };
  // optional .perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName vk_debug_utils_object_name = 1;
  bool has_vk_debug_utils_object_name() const;
  void clear_vk_debug_utils_object_name();
  const ::perfetto::protos::VulkanApiEvent_VkDebugUtilsObjectName& vk_debug_utils_object_name() const;
  ::perfetto::protos::VulkanApiEvent_VkDebugUtilsObjectName* release_vk_debug_utils_object_name();
  ::perfetto::protos::VulkanApiEvent_VkDebugUtilsObjectName* mutable_vk_debug_utils_object_name();
  void set_allocated_vk_debug_utils_object_name(::perfetto::protos::VulkanApiEvent_VkDebugUtilsObjectName* vk_debug_utils_object_name);

  // optional .perfetto.protos.VulkanApiEvent.VkQueueSubmit vk_queue_submit = 2;
  bool has_vk_queue_submit() const;
  void clear_vk_queue_submit();
  const ::perfetto::protos::VulkanApiEvent_VkQueueSubmit& vk_queue_submit() const;
  ::perfetto::protos::VulkanApiEvent_VkQueueSubmit* release_vk_queue_submit();
  ::perfetto::protos::VulkanApiEvent_VkQueueSubmit* mutable_vk_queue_submit();
  void set_allocated_vk_queue_submit(::perfetto::protos::VulkanApiEvent_VkQueueSubmit* vk_queue_submit);

  void clear_event();
  EventCase event_case() const;
  // @@protoc_insertion_point(class_scope:perfetto.protos.VulkanApiEvent)
 private:
  class _Internal;
  void set_has_vk_debug_utils_object_name();
  void set_has_vk_queue_submit();

  inline bool has_event() const;
  inline void clear_has_event();

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  union EventUnion {
    EventUnion() {}
    ::perfetto::protos::VulkanApiEvent_VkDebugUtilsObjectName* vk_debug_utils_object_name_;
    ::perfetto::protos::VulkanApiEvent_VkQueueSubmit* vk_queue_submit_;
  } event_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fgpu_2fvulkan_5fapi_5fevent_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VulkanApiEvent_VkDebugUtilsObjectName

// optional uint32 pid = 1;
inline bool VulkanApiEvent_VkDebugUtilsObjectName::has_pid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void VulkanApiEvent_VkDebugUtilsObjectName::clear_pid() {
  pid_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 VulkanApiEvent_VkDebugUtilsObjectName::pid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName.pid)
  return pid_;
}
inline void VulkanApiEvent_VkDebugUtilsObjectName::set_pid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000004u;
  pid_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName.pid)
}

// optional uint64 vk_device = 2;
inline bool VulkanApiEvent_VkDebugUtilsObjectName::has_vk_device() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void VulkanApiEvent_VkDebugUtilsObjectName::clear_vk_device() {
  vk_device_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 VulkanApiEvent_VkDebugUtilsObjectName::vk_device() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName.vk_device)
  return vk_device_;
}
inline void VulkanApiEvent_VkDebugUtilsObjectName::set_vk_device(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000002u;
  vk_device_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName.vk_device)
}

// optional int32 object_type = 3;
inline bool VulkanApiEvent_VkDebugUtilsObjectName::has_object_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void VulkanApiEvent_VkDebugUtilsObjectName::clear_object_type() {
  object_type_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 VulkanApiEvent_VkDebugUtilsObjectName::object_type() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName.object_type)
  return object_type_;
}
inline void VulkanApiEvent_VkDebugUtilsObjectName::set_object_type(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000008u;
  object_type_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName.object_type)
}

// optional uint64 object = 4;
inline bool VulkanApiEvent_VkDebugUtilsObjectName::has_object() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void VulkanApiEvent_VkDebugUtilsObjectName::clear_object() {
  object_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 VulkanApiEvent_VkDebugUtilsObjectName::object() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName.object)
  return object_;
}
inline void VulkanApiEvent_VkDebugUtilsObjectName::set_object(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000010u;
  object_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName.object)
}

// optional string object_name = 5;
inline bool VulkanApiEvent_VkDebugUtilsObjectName::has_object_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void VulkanApiEvent_VkDebugUtilsObjectName::clear_object_name() {
  object_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& VulkanApiEvent_VkDebugUtilsObjectName::object_name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName.object_name)
  return object_name_.GetNoArena();
}
inline void VulkanApiEvent_VkDebugUtilsObjectName::set_object_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  object_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName.object_name)
}
inline void VulkanApiEvent_VkDebugUtilsObjectName::set_object_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  object_name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName.object_name)
}
inline void VulkanApiEvent_VkDebugUtilsObjectName::set_object_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  object_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName.object_name)
}
inline void VulkanApiEvent_VkDebugUtilsObjectName::set_object_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  object_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName.object_name)
}
inline std::string* VulkanApiEvent_VkDebugUtilsObjectName::mutable_object_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName.object_name)
  return object_name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* VulkanApiEvent_VkDebugUtilsObjectName::release_object_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName.object_name)
  if (!has_object_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return object_name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void VulkanApiEvent_VkDebugUtilsObjectName::set_allocated_object_name(std::string* object_name) {
  if (object_name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  object_name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), object_name);
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName.object_name)
}

// -------------------------------------------------------------------

// VulkanApiEvent_VkQueueSubmit

// optional uint64 duration_ns = 1;
inline bool VulkanApiEvent_VkQueueSubmit::has_duration_ns() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void VulkanApiEvent_VkQueueSubmit::clear_duration_ns() {
  duration_ns_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 VulkanApiEvent_VkQueueSubmit::duration_ns() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.VulkanApiEvent.VkQueueSubmit.duration_ns)
  return duration_ns_;
}
inline void VulkanApiEvent_VkQueueSubmit::set_duration_ns(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000001u;
  duration_ns_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.VulkanApiEvent.VkQueueSubmit.duration_ns)
}

// optional uint32 pid = 2;
inline bool VulkanApiEvent_VkQueueSubmit::has_pid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void VulkanApiEvent_VkQueueSubmit::clear_pid() {
  pid_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 VulkanApiEvent_VkQueueSubmit::pid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.VulkanApiEvent.VkQueueSubmit.pid)
  return pid_;
}
inline void VulkanApiEvent_VkQueueSubmit::set_pid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  pid_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.VulkanApiEvent.VkQueueSubmit.pid)
}

// optional uint32 tid = 3;
inline bool VulkanApiEvent_VkQueueSubmit::has_tid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void VulkanApiEvent_VkQueueSubmit::clear_tid() {
  tid_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 VulkanApiEvent_VkQueueSubmit::tid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.VulkanApiEvent.VkQueueSubmit.tid)
  return tid_;
}
inline void VulkanApiEvent_VkQueueSubmit::set_tid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000004u;
  tid_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.VulkanApiEvent.VkQueueSubmit.tid)
}

// optional uint64 vk_queue = 4;
inline bool VulkanApiEvent_VkQueueSubmit::has_vk_queue() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void VulkanApiEvent_VkQueueSubmit::clear_vk_queue() {
  vk_queue_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 VulkanApiEvent_VkQueueSubmit::vk_queue() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.VulkanApiEvent.VkQueueSubmit.vk_queue)
  return vk_queue_;
}
inline void VulkanApiEvent_VkQueueSubmit::set_vk_queue(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000008u;
  vk_queue_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.VulkanApiEvent.VkQueueSubmit.vk_queue)
}

// repeated uint64 vk_command_buffers = 5;
inline int VulkanApiEvent_VkQueueSubmit::vk_command_buffers_size() const {
  return vk_command_buffers_.size();
}
inline void VulkanApiEvent_VkQueueSubmit::clear_vk_command_buffers() {
  vk_command_buffers_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 VulkanApiEvent_VkQueueSubmit::vk_command_buffers(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.VulkanApiEvent.VkQueueSubmit.vk_command_buffers)
  return vk_command_buffers_.Get(index);
}
inline void VulkanApiEvent_VkQueueSubmit::set_vk_command_buffers(int index, ::PROTOBUF_NAMESPACE_ID::uint64 value) {
  vk_command_buffers_.Set(index, value);
  // @@protoc_insertion_point(field_set:perfetto.protos.VulkanApiEvent.VkQueueSubmit.vk_command_buffers)
}
inline void VulkanApiEvent_VkQueueSubmit::add_vk_command_buffers(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  vk_command_buffers_.Add(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.VulkanApiEvent.VkQueueSubmit.vk_command_buffers)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint64 >&
VulkanApiEvent_VkQueueSubmit::vk_command_buffers() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.VulkanApiEvent.VkQueueSubmit.vk_command_buffers)
  return vk_command_buffers_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint64 >*
VulkanApiEvent_VkQueueSubmit::mutable_vk_command_buffers() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.VulkanApiEvent.VkQueueSubmit.vk_command_buffers)
  return &vk_command_buffers_;
}

// optional uint32 submission_id = 6;
inline bool VulkanApiEvent_VkQueueSubmit::has_submission_id() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void VulkanApiEvent_VkQueueSubmit::clear_submission_id() {
  submission_id_ = 0u;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 VulkanApiEvent_VkQueueSubmit::submission_id() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.VulkanApiEvent.VkQueueSubmit.submission_id)
  return submission_id_;
}
inline void VulkanApiEvent_VkQueueSubmit::set_submission_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000010u;
  submission_id_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.VulkanApiEvent.VkQueueSubmit.submission_id)
}

// -------------------------------------------------------------------

// VulkanApiEvent

// optional .perfetto.protos.VulkanApiEvent.VkDebugUtilsObjectName vk_debug_utils_object_name = 1;
inline bool VulkanApiEvent::has_vk_debug_utils_object_name() const {
  return event_case() == kVkDebugUtilsObjectName;
}
inline void VulkanApiEvent::set_has_vk_debug_utils_object_name() {
  _oneof_case_[0] = kVkDebugUtilsObjectName;
}
inline void VulkanApiEvent::clear_vk_debug_utils_object_name() {
  if (has_vk_debug_utils_object_name()) {
    delete event_.vk_debug_utils_object_name_;
    clear_has_event();
  }
}
inline ::perfetto::protos::VulkanApiEvent_VkDebugUtilsObjectName* VulkanApiEvent::release_vk_debug_utils_object_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.VulkanApiEvent.vk_debug_utils_object_name)
  if (has_vk_debug_utils_object_name()) {
    clear_has_event();
      ::perfetto::protos::VulkanApiEvent_VkDebugUtilsObjectName* temp = event_.vk_debug_utils_object_name_;
    event_.vk_debug_utils_object_name_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::perfetto::protos::VulkanApiEvent_VkDebugUtilsObjectName& VulkanApiEvent::vk_debug_utils_object_name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.VulkanApiEvent.vk_debug_utils_object_name)
  return has_vk_debug_utils_object_name()
      ? *event_.vk_debug_utils_object_name_
      : *reinterpret_cast< ::perfetto::protos::VulkanApiEvent_VkDebugUtilsObjectName*>(&::perfetto::protos::_VulkanApiEvent_VkDebugUtilsObjectName_default_instance_);
}
inline ::perfetto::protos::VulkanApiEvent_VkDebugUtilsObjectName* VulkanApiEvent::mutable_vk_debug_utils_object_name() {
  if (!has_vk_debug_utils_object_name()) {
    clear_event();
    set_has_vk_debug_utils_object_name();
    event_.vk_debug_utils_object_name_ = CreateMaybeMessage< ::perfetto::protos::VulkanApiEvent_VkDebugUtilsObjectName >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:perfetto.protos.VulkanApiEvent.vk_debug_utils_object_name)
  return event_.vk_debug_utils_object_name_;
}

// optional .perfetto.protos.VulkanApiEvent.VkQueueSubmit vk_queue_submit = 2;
inline bool VulkanApiEvent::has_vk_queue_submit() const {
  return event_case() == kVkQueueSubmit;
}
inline void VulkanApiEvent::set_has_vk_queue_submit() {
  _oneof_case_[0] = kVkQueueSubmit;
}
inline void VulkanApiEvent::clear_vk_queue_submit() {
  if (has_vk_queue_submit()) {
    delete event_.vk_queue_submit_;
    clear_has_event();
  }
}
inline ::perfetto::protos::VulkanApiEvent_VkQueueSubmit* VulkanApiEvent::release_vk_queue_submit() {
  // @@protoc_insertion_point(field_release:perfetto.protos.VulkanApiEvent.vk_queue_submit)
  if (has_vk_queue_submit()) {
    clear_has_event();
      ::perfetto::protos::VulkanApiEvent_VkQueueSubmit* temp = event_.vk_queue_submit_;
    event_.vk_queue_submit_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::perfetto::protos::VulkanApiEvent_VkQueueSubmit& VulkanApiEvent::vk_queue_submit() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.VulkanApiEvent.vk_queue_submit)
  return has_vk_queue_submit()
      ? *event_.vk_queue_submit_
      : *reinterpret_cast< ::perfetto::protos::VulkanApiEvent_VkQueueSubmit*>(&::perfetto::protos::_VulkanApiEvent_VkQueueSubmit_default_instance_);
}
inline ::perfetto::protos::VulkanApiEvent_VkQueueSubmit* VulkanApiEvent::mutable_vk_queue_submit() {
  if (!has_vk_queue_submit()) {
    clear_event();
    set_has_vk_queue_submit();
    event_.vk_queue_submit_ = CreateMaybeMessage< ::perfetto::protos::VulkanApiEvent_VkQueueSubmit >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:perfetto.protos.VulkanApiEvent.vk_queue_submit)
  return event_.vk_queue_submit_;
}

inline bool VulkanApiEvent::has_event() const {
  return event_case() != EVENT_NOT_SET;
}
inline void VulkanApiEvent::clear_has_event() {
  _oneof_case_[0] = EVENT_NOT_SET;
}
inline VulkanApiEvent::EventCase VulkanApiEvent::event_case() const {
  return VulkanApiEvent::EventCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fgpu_2fvulkan_5fapi_5fevent_2eproto
