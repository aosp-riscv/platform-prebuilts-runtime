// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/android/graphics_frame_event.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fandroid_2fgraphics_5fframe_5fevent_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fandroid_2fgraphics_5fframe_5fevent_2eproto

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
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fandroid_2fgraphics_5fframe_5fevent_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fandroid_2fgraphics_5fframe_5fevent_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
namespace perfetto {
namespace protos {
class GraphicsFrameEvent;
class GraphicsFrameEventDefaultTypeInternal;
extern GraphicsFrameEventDefaultTypeInternal _GraphicsFrameEvent_default_instance_;
class GraphicsFrameEvent_BufferEvent;
class GraphicsFrameEvent_BufferEventDefaultTypeInternal;
extern GraphicsFrameEvent_BufferEventDefaultTypeInternal _GraphicsFrameEvent_BufferEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::GraphicsFrameEvent* Arena::CreateMaybeMessage<::perfetto::protos::GraphicsFrameEvent>(Arena*);
template<> ::perfetto::protos::GraphicsFrameEvent_BufferEvent* Arena::CreateMaybeMessage<::perfetto::protos::GraphicsFrameEvent_BufferEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

enum GraphicsFrameEvent_BufferEventType : int {
  GraphicsFrameEvent_BufferEventType_UNSPECIFIED = 0,
  GraphicsFrameEvent_BufferEventType_DEQUEUE = 1,
  GraphicsFrameEvent_BufferEventType_QUEUE = 2,
  GraphicsFrameEvent_BufferEventType_POST = 3,
  GraphicsFrameEvent_BufferEventType_ACQUIRE_FENCE = 4,
  GraphicsFrameEvent_BufferEventType_LATCH = 5,
  GraphicsFrameEvent_BufferEventType_HWC_COMPOSITION_QUEUED = 6,
  GraphicsFrameEvent_BufferEventType_FALLBACK_COMPOSITION = 7,
  GraphicsFrameEvent_BufferEventType_PRESENT_FENCE = 8,
  GraphicsFrameEvent_BufferEventType_RELEASE_FENCE = 9,
  GraphicsFrameEvent_BufferEventType_MODIFY = 10,
  GraphicsFrameEvent_BufferEventType_DETACH = 11,
  GraphicsFrameEvent_BufferEventType_ATTACH = 12,
  GraphicsFrameEvent_BufferEventType_CANCEL = 13
};
bool GraphicsFrameEvent_BufferEventType_IsValid(int value);
constexpr GraphicsFrameEvent_BufferEventType GraphicsFrameEvent_BufferEventType_BufferEventType_MIN = GraphicsFrameEvent_BufferEventType_UNSPECIFIED;
constexpr GraphicsFrameEvent_BufferEventType GraphicsFrameEvent_BufferEventType_BufferEventType_MAX = GraphicsFrameEvent_BufferEventType_CANCEL;
constexpr int GraphicsFrameEvent_BufferEventType_BufferEventType_ARRAYSIZE = GraphicsFrameEvent_BufferEventType_BufferEventType_MAX + 1;

const std::string& GraphicsFrameEvent_BufferEventType_Name(GraphicsFrameEvent_BufferEventType value);
template<typename T>
inline const std::string& GraphicsFrameEvent_BufferEventType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, GraphicsFrameEvent_BufferEventType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function GraphicsFrameEvent_BufferEventType_Name.");
  return GraphicsFrameEvent_BufferEventType_Name(static_cast<GraphicsFrameEvent_BufferEventType>(enum_t_value));
}
bool GraphicsFrameEvent_BufferEventType_Parse(
    const std::string& name, GraphicsFrameEvent_BufferEventType* value);
// ===================================================================

class GraphicsFrameEvent_BufferEvent :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.GraphicsFrameEvent.BufferEvent) */ {
 public:
  GraphicsFrameEvent_BufferEvent();
  virtual ~GraphicsFrameEvent_BufferEvent();

  GraphicsFrameEvent_BufferEvent(const GraphicsFrameEvent_BufferEvent& from);
  GraphicsFrameEvent_BufferEvent(GraphicsFrameEvent_BufferEvent&& from) noexcept
    : GraphicsFrameEvent_BufferEvent() {
    *this = ::std::move(from);
  }

  inline GraphicsFrameEvent_BufferEvent& operator=(const GraphicsFrameEvent_BufferEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline GraphicsFrameEvent_BufferEvent& operator=(GraphicsFrameEvent_BufferEvent&& from) noexcept {
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

  static const GraphicsFrameEvent_BufferEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GraphicsFrameEvent_BufferEvent* internal_default_instance() {
    return reinterpret_cast<const GraphicsFrameEvent_BufferEvent*>(
               &_GraphicsFrameEvent_BufferEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GraphicsFrameEvent_BufferEvent& a, GraphicsFrameEvent_BufferEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(GraphicsFrameEvent_BufferEvent* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GraphicsFrameEvent_BufferEvent* New() const final {
    return CreateMaybeMessage<GraphicsFrameEvent_BufferEvent>(nullptr);
  }

  GraphicsFrameEvent_BufferEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GraphicsFrameEvent_BufferEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const GraphicsFrameEvent_BufferEvent& from);
  void MergeFrom(const GraphicsFrameEvent_BufferEvent& from);
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
  void InternalSwap(GraphicsFrameEvent_BufferEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.GraphicsFrameEvent.BufferEvent";
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
    kLayerNameFieldNumber = 3,
    kFrameNumberFieldNumber = 1,
    kTypeFieldNumber = 2,
    kDurationNsFieldNumber = 4,
    kBufferIdFieldNumber = 5,
  };
  // optional string layer_name = 3;
  bool has_layer_name() const;
  void clear_layer_name();
  const std::string& layer_name() const;
  void set_layer_name(const std::string& value);
  void set_layer_name(std::string&& value);
  void set_layer_name(const char* value);
  void set_layer_name(const char* value, size_t size);
  std::string* mutable_layer_name();
  std::string* release_layer_name();
  void set_allocated_layer_name(std::string* layer_name);

  // optional uint32 frame_number = 1;
  bool has_frame_number() const;
  void clear_frame_number();
  ::PROTOBUF_NAMESPACE_ID::uint32 frame_number() const;
  void set_frame_number(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // optional .perfetto.protos.GraphicsFrameEvent.BufferEventType type = 2;
  bool has_type() const;
  void clear_type();
  ::perfetto::protos::GraphicsFrameEvent_BufferEventType type() const;
  void set_type(::perfetto::protos::GraphicsFrameEvent_BufferEventType value);

  // optional uint64 duration_ns = 4;
  bool has_duration_ns() const;
  void clear_duration_ns();
  ::PROTOBUF_NAMESPACE_ID::uint64 duration_ns() const;
  void set_duration_ns(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // optional uint32 buffer_id = 5;
  bool has_buffer_id() const;
  void clear_buffer_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 buffer_id() const;
  void set_buffer_id(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.GraphicsFrameEvent.BufferEvent)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr layer_name_;
  ::PROTOBUF_NAMESPACE_ID::uint32 frame_number_;
  int type_;
  ::PROTOBUF_NAMESPACE_ID::uint64 duration_ns_;
  ::PROTOBUF_NAMESPACE_ID::uint32 buffer_id_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fandroid_2fgraphics_5fframe_5fevent_2eproto;
};
// -------------------------------------------------------------------

class GraphicsFrameEvent :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.GraphicsFrameEvent) */ {
 public:
  GraphicsFrameEvent();
  virtual ~GraphicsFrameEvent();

  GraphicsFrameEvent(const GraphicsFrameEvent& from);
  GraphicsFrameEvent(GraphicsFrameEvent&& from) noexcept
    : GraphicsFrameEvent() {
    *this = ::std::move(from);
  }

  inline GraphicsFrameEvent& operator=(const GraphicsFrameEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline GraphicsFrameEvent& operator=(GraphicsFrameEvent&& from) noexcept {
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

  static const GraphicsFrameEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GraphicsFrameEvent* internal_default_instance() {
    return reinterpret_cast<const GraphicsFrameEvent*>(
               &_GraphicsFrameEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GraphicsFrameEvent& a, GraphicsFrameEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(GraphicsFrameEvent* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GraphicsFrameEvent* New() const final {
    return CreateMaybeMessage<GraphicsFrameEvent>(nullptr);
  }

  GraphicsFrameEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GraphicsFrameEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const GraphicsFrameEvent& from);
  void MergeFrom(const GraphicsFrameEvent& from);
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
  void InternalSwap(GraphicsFrameEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.GraphicsFrameEvent";
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

  typedef GraphicsFrameEvent_BufferEvent BufferEvent;

  typedef GraphicsFrameEvent_BufferEventType BufferEventType;
  static constexpr BufferEventType UNSPECIFIED =
    GraphicsFrameEvent_BufferEventType_UNSPECIFIED;
  static constexpr BufferEventType DEQUEUE =
    GraphicsFrameEvent_BufferEventType_DEQUEUE;
  static constexpr BufferEventType QUEUE =
    GraphicsFrameEvent_BufferEventType_QUEUE;
  static constexpr BufferEventType POST =
    GraphicsFrameEvent_BufferEventType_POST;
  static constexpr BufferEventType ACQUIRE_FENCE =
    GraphicsFrameEvent_BufferEventType_ACQUIRE_FENCE;
  static constexpr BufferEventType LATCH =
    GraphicsFrameEvent_BufferEventType_LATCH;
  static constexpr BufferEventType HWC_COMPOSITION_QUEUED =
    GraphicsFrameEvent_BufferEventType_HWC_COMPOSITION_QUEUED;
  static constexpr BufferEventType FALLBACK_COMPOSITION =
    GraphicsFrameEvent_BufferEventType_FALLBACK_COMPOSITION;
  static constexpr BufferEventType PRESENT_FENCE =
    GraphicsFrameEvent_BufferEventType_PRESENT_FENCE;
  static constexpr BufferEventType RELEASE_FENCE =
    GraphicsFrameEvent_BufferEventType_RELEASE_FENCE;
  static constexpr BufferEventType MODIFY =
    GraphicsFrameEvent_BufferEventType_MODIFY;
  static constexpr BufferEventType DETACH =
    GraphicsFrameEvent_BufferEventType_DETACH;
  static constexpr BufferEventType ATTACH =
    GraphicsFrameEvent_BufferEventType_ATTACH;
  static constexpr BufferEventType CANCEL =
    GraphicsFrameEvent_BufferEventType_CANCEL;
  static inline bool BufferEventType_IsValid(int value) {
    return GraphicsFrameEvent_BufferEventType_IsValid(value);
  }
  static constexpr BufferEventType BufferEventType_MIN =
    GraphicsFrameEvent_BufferEventType_BufferEventType_MIN;
  static constexpr BufferEventType BufferEventType_MAX =
    GraphicsFrameEvent_BufferEventType_BufferEventType_MAX;
  static constexpr int BufferEventType_ARRAYSIZE =
    GraphicsFrameEvent_BufferEventType_BufferEventType_ARRAYSIZE;
  template<typename T>
  static inline const std::string& BufferEventType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, BufferEventType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function BufferEventType_Name.");
    return GraphicsFrameEvent_BufferEventType_Name(enum_t_value);
  }
  static inline bool BufferEventType_Parse(const std::string& name,
      BufferEventType* value) {
    return GraphicsFrameEvent_BufferEventType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kBufferEventFieldNumber = 1,
  };
  // optional .perfetto.protos.GraphicsFrameEvent.BufferEvent buffer_event = 1;
  bool has_buffer_event() const;
  void clear_buffer_event();
  const ::perfetto::protos::GraphicsFrameEvent_BufferEvent& buffer_event() const;
  ::perfetto::protos::GraphicsFrameEvent_BufferEvent* release_buffer_event();
  ::perfetto::protos::GraphicsFrameEvent_BufferEvent* mutable_buffer_event();
  void set_allocated_buffer_event(::perfetto::protos::GraphicsFrameEvent_BufferEvent* buffer_event);

  // @@protoc_insertion_point(class_scope:perfetto.protos.GraphicsFrameEvent)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::perfetto::protos::GraphicsFrameEvent_BufferEvent* buffer_event_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fandroid_2fgraphics_5fframe_5fevent_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GraphicsFrameEvent_BufferEvent

// optional uint32 frame_number = 1;
inline bool GraphicsFrameEvent_BufferEvent::has_frame_number() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GraphicsFrameEvent_BufferEvent::clear_frame_number() {
  frame_number_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 GraphicsFrameEvent_BufferEvent::frame_number() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GraphicsFrameEvent.BufferEvent.frame_number)
  return frame_number_;
}
inline void GraphicsFrameEvent_BufferEvent::set_frame_number(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  frame_number_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.GraphicsFrameEvent.BufferEvent.frame_number)
}

// optional .perfetto.protos.GraphicsFrameEvent.BufferEventType type = 2;
inline bool GraphicsFrameEvent_BufferEvent::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GraphicsFrameEvent_BufferEvent::clear_type() {
  type_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::perfetto::protos::GraphicsFrameEvent_BufferEventType GraphicsFrameEvent_BufferEvent::type() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GraphicsFrameEvent.BufferEvent.type)
  return static_cast< ::perfetto::protos::GraphicsFrameEvent_BufferEventType >(type_);
}
inline void GraphicsFrameEvent_BufferEvent::set_type(::perfetto::protos::GraphicsFrameEvent_BufferEventType value) {
  assert(::perfetto::protos::GraphicsFrameEvent_BufferEventType_IsValid(value));
  _has_bits_[0] |= 0x00000004u;
  type_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.GraphicsFrameEvent.BufferEvent.type)
}

// optional string layer_name = 3;
inline bool GraphicsFrameEvent_BufferEvent::has_layer_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GraphicsFrameEvent_BufferEvent::clear_layer_name() {
  layer_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& GraphicsFrameEvent_BufferEvent::layer_name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GraphicsFrameEvent.BufferEvent.layer_name)
  return layer_name_.GetNoArena();
}
inline void GraphicsFrameEvent_BufferEvent::set_layer_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  layer_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:perfetto.protos.GraphicsFrameEvent.BufferEvent.layer_name)
}
inline void GraphicsFrameEvent_BufferEvent::set_layer_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  layer_name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:perfetto.protos.GraphicsFrameEvent.BufferEvent.layer_name)
}
inline void GraphicsFrameEvent_BufferEvent::set_layer_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  layer_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:perfetto.protos.GraphicsFrameEvent.BufferEvent.layer_name)
}
inline void GraphicsFrameEvent_BufferEvent::set_layer_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  layer_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.GraphicsFrameEvent.BufferEvent.layer_name)
}
inline std::string* GraphicsFrameEvent_BufferEvent::mutable_layer_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:perfetto.protos.GraphicsFrameEvent.BufferEvent.layer_name)
  return layer_name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* GraphicsFrameEvent_BufferEvent::release_layer_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.GraphicsFrameEvent.BufferEvent.layer_name)
  if (!has_layer_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return layer_name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void GraphicsFrameEvent_BufferEvent::set_allocated_layer_name(std::string* layer_name) {
  if (layer_name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  layer_name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), layer_name);
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.GraphicsFrameEvent.BufferEvent.layer_name)
}

// optional uint64 duration_ns = 4;
inline bool GraphicsFrameEvent_BufferEvent::has_duration_ns() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void GraphicsFrameEvent_BufferEvent::clear_duration_ns() {
  duration_ns_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 GraphicsFrameEvent_BufferEvent::duration_ns() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GraphicsFrameEvent.BufferEvent.duration_ns)
  return duration_ns_;
}
inline void GraphicsFrameEvent_BufferEvent::set_duration_ns(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000008u;
  duration_ns_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.GraphicsFrameEvent.BufferEvent.duration_ns)
}

// optional uint32 buffer_id = 5;
inline bool GraphicsFrameEvent_BufferEvent::has_buffer_id() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void GraphicsFrameEvent_BufferEvent::clear_buffer_id() {
  buffer_id_ = 0u;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 GraphicsFrameEvent_BufferEvent::buffer_id() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GraphicsFrameEvent.BufferEvent.buffer_id)
  return buffer_id_;
}
inline void GraphicsFrameEvent_BufferEvent::set_buffer_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000010u;
  buffer_id_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.GraphicsFrameEvent.BufferEvent.buffer_id)
}

// -------------------------------------------------------------------

// GraphicsFrameEvent

// optional .perfetto.protos.GraphicsFrameEvent.BufferEvent buffer_event = 1;
inline bool GraphicsFrameEvent::has_buffer_event() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GraphicsFrameEvent::clear_buffer_event() {
  if (buffer_event_ != nullptr) buffer_event_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::perfetto::protos::GraphicsFrameEvent_BufferEvent& GraphicsFrameEvent::buffer_event() const {
  const ::perfetto::protos::GraphicsFrameEvent_BufferEvent* p = buffer_event_;
  // @@protoc_insertion_point(field_get:perfetto.protos.GraphicsFrameEvent.buffer_event)
  return p != nullptr ? *p : *reinterpret_cast<const ::perfetto::protos::GraphicsFrameEvent_BufferEvent*>(
      &::perfetto::protos::_GraphicsFrameEvent_BufferEvent_default_instance_);
}
inline ::perfetto::protos::GraphicsFrameEvent_BufferEvent* GraphicsFrameEvent::release_buffer_event() {
  // @@protoc_insertion_point(field_release:perfetto.protos.GraphicsFrameEvent.buffer_event)
  _has_bits_[0] &= ~0x00000001u;
  ::perfetto::protos::GraphicsFrameEvent_BufferEvent* temp = buffer_event_;
  buffer_event_ = nullptr;
  return temp;
}
inline ::perfetto::protos::GraphicsFrameEvent_BufferEvent* GraphicsFrameEvent::mutable_buffer_event() {
  _has_bits_[0] |= 0x00000001u;
  if (buffer_event_ == nullptr) {
    auto* p = CreateMaybeMessage<::perfetto::protos::GraphicsFrameEvent_BufferEvent>(GetArenaNoVirtual());
    buffer_event_ = p;
  }
  // @@protoc_insertion_point(field_mutable:perfetto.protos.GraphicsFrameEvent.buffer_event)
  return buffer_event_;
}
inline void GraphicsFrameEvent::set_allocated_buffer_event(::perfetto::protos::GraphicsFrameEvent_BufferEvent* buffer_event) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete buffer_event_;
  }
  if (buffer_event) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      buffer_event = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, buffer_event, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  buffer_event_ = buffer_event;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.GraphicsFrameEvent.buffer_event)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::perfetto::protos::GraphicsFrameEvent_BufferEventType> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fandroid_2fgraphics_5fframe_5fevent_2eproto
