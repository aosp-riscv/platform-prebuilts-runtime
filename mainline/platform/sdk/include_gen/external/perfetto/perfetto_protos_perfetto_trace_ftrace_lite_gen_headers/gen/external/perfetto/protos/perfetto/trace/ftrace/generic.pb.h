// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/generic.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fgeneric_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fgeneric_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2fgeneric_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fgeneric_2eproto {
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
class GenericFtraceEvent;
class GenericFtraceEventDefaultTypeInternal;
extern GenericFtraceEventDefaultTypeInternal _GenericFtraceEvent_default_instance_;
class GenericFtraceEvent_Field;
class GenericFtraceEvent_FieldDefaultTypeInternal;
extern GenericFtraceEvent_FieldDefaultTypeInternal _GenericFtraceEvent_Field_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::GenericFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::GenericFtraceEvent>(Arena*);
template<> ::perfetto::protos::GenericFtraceEvent_Field* Arena::CreateMaybeMessage<::perfetto::protos::GenericFtraceEvent_Field>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class GenericFtraceEvent_Field :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.GenericFtraceEvent.Field) */ {
 public:
  GenericFtraceEvent_Field();
  virtual ~GenericFtraceEvent_Field();

  GenericFtraceEvent_Field(const GenericFtraceEvent_Field& from);
  GenericFtraceEvent_Field(GenericFtraceEvent_Field&& from) noexcept
    : GenericFtraceEvent_Field() {
    *this = ::std::move(from);
  }

  inline GenericFtraceEvent_Field& operator=(const GenericFtraceEvent_Field& from) {
    CopyFrom(from);
    return *this;
  }
  inline GenericFtraceEvent_Field& operator=(GenericFtraceEvent_Field&& from) noexcept {
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

  static const GenericFtraceEvent_Field& default_instance();

  enum ValueCase {
    kStrValue = 3,
    kIntValue = 4,
    kUintValue = 5,
    VALUE_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GenericFtraceEvent_Field* internal_default_instance() {
    return reinterpret_cast<const GenericFtraceEvent_Field*>(
               &_GenericFtraceEvent_Field_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GenericFtraceEvent_Field& a, GenericFtraceEvent_Field& b) {
    a.Swap(&b);
  }
  inline void Swap(GenericFtraceEvent_Field* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GenericFtraceEvent_Field* New() const final {
    return CreateMaybeMessage<GenericFtraceEvent_Field>(nullptr);
  }

  GenericFtraceEvent_Field* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GenericFtraceEvent_Field>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const GenericFtraceEvent_Field& from);
  void MergeFrom(const GenericFtraceEvent_Field& from);
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
  void InternalSwap(GenericFtraceEvent_Field* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.GenericFtraceEvent.Field";
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
    kNameFieldNumber = 1,
    kStrValueFieldNumber = 3,
    kIntValueFieldNumber = 4,
    kUintValueFieldNumber = 5,
  };
  // optional string name = 1;
  bool has_name() const;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);

  // optional string str_value = 3;
  bool has_str_value() const;
  void clear_str_value();
  const std::string& str_value() const;
  void set_str_value(const std::string& value);
  void set_str_value(std::string&& value);
  void set_str_value(const char* value);
  void set_str_value(const char* value, size_t size);
  std::string* mutable_str_value();
  std::string* release_str_value();
  void set_allocated_str_value(std::string* str_value);

  // optional int64 int_value = 4;
  bool has_int_value() const;
  void clear_int_value();
  ::PROTOBUF_NAMESPACE_ID::int64 int_value() const;
  void set_int_value(::PROTOBUF_NAMESPACE_ID::int64 value);

  // optional uint64 uint_value = 5;
  bool has_uint_value() const;
  void clear_uint_value();
  ::PROTOBUF_NAMESPACE_ID::uint64 uint_value() const;
  void set_uint_value(::PROTOBUF_NAMESPACE_ID::uint64 value);

  void clear_value();
  ValueCase value_case() const;
  // @@protoc_insertion_point(class_scope:perfetto.protos.GenericFtraceEvent.Field)
 private:
  class _Internal;
  void set_has_str_value();
  void set_has_int_value();
  void set_has_uint_value();

  inline bool has_value() const;
  inline void clear_has_value();

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  union ValueUnion {
    ValueUnion() {}
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr str_value_;
    ::PROTOBUF_NAMESPACE_ID::int64 int_value_;
    ::PROTOBUF_NAMESPACE_ID::uint64 uint_value_;
  } value_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fgeneric_2eproto;
};
// -------------------------------------------------------------------

class GenericFtraceEvent :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.GenericFtraceEvent) */ {
 public:
  GenericFtraceEvent();
  virtual ~GenericFtraceEvent();

  GenericFtraceEvent(const GenericFtraceEvent& from);
  GenericFtraceEvent(GenericFtraceEvent&& from) noexcept
    : GenericFtraceEvent() {
    *this = ::std::move(from);
  }

  inline GenericFtraceEvent& operator=(const GenericFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline GenericFtraceEvent& operator=(GenericFtraceEvent&& from) noexcept {
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

  static const GenericFtraceEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GenericFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const GenericFtraceEvent*>(
               &_GenericFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GenericFtraceEvent& a, GenericFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(GenericFtraceEvent* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GenericFtraceEvent* New() const final {
    return CreateMaybeMessage<GenericFtraceEvent>(nullptr);
  }

  GenericFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GenericFtraceEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const GenericFtraceEvent& from);
  void MergeFrom(const GenericFtraceEvent& from);
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
  void InternalSwap(GenericFtraceEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.GenericFtraceEvent";
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

  typedef GenericFtraceEvent_Field Field;

  // accessors -------------------------------------------------------

  enum : int {
    kFieldFieldNumber = 2,
    kEventNameFieldNumber = 1,
  };
  // repeated .perfetto.protos.GenericFtraceEvent.Field field = 2;
  int field_size() const;
  void clear_field();
  ::perfetto::protos::GenericFtraceEvent_Field* mutable_field(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::GenericFtraceEvent_Field >*
      mutable_field();
  const ::perfetto::protos::GenericFtraceEvent_Field& field(int index) const;
  ::perfetto::protos::GenericFtraceEvent_Field* add_field();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::GenericFtraceEvent_Field >&
      field() const;

  // optional string event_name = 1;
  bool has_event_name() const;
  void clear_event_name();
  const std::string& event_name() const;
  void set_event_name(const std::string& value);
  void set_event_name(std::string&& value);
  void set_event_name(const char* value);
  void set_event_name(const char* value, size_t size);
  std::string* mutable_event_name();
  std::string* release_event_name();
  void set_allocated_event_name(std::string* event_name);

  // @@protoc_insertion_point(class_scope:perfetto.protos.GenericFtraceEvent)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::GenericFtraceEvent_Field > field_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr event_name_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fgeneric_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GenericFtraceEvent_Field

// optional string name = 1;
inline bool GenericFtraceEvent_Field::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GenericFtraceEvent_Field::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& GenericFtraceEvent_Field::name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GenericFtraceEvent.Field.name)
  return name_.GetNoArena();
}
inline void GenericFtraceEvent_Field::set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:perfetto.protos.GenericFtraceEvent.Field.name)
}
inline void GenericFtraceEvent_Field::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:perfetto.protos.GenericFtraceEvent.Field.name)
}
inline void GenericFtraceEvent_Field::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:perfetto.protos.GenericFtraceEvent.Field.name)
}
inline void GenericFtraceEvent_Field::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.GenericFtraceEvent.Field.name)
}
inline std::string* GenericFtraceEvent_Field::mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:perfetto.protos.GenericFtraceEvent.Field.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* GenericFtraceEvent_Field::release_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.GenericFtraceEvent.Field.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void GenericFtraceEvent_Field::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.GenericFtraceEvent.Field.name)
}

// optional string str_value = 3;
inline bool GenericFtraceEvent_Field::has_str_value() const {
  return value_case() == kStrValue;
}
inline void GenericFtraceEvent_Field::set_has_str_value() {
  _oneof_case_[0] = kStrValue;
}
inline void GenericFtraceEvent_Field::clear_str_value() {
  if (has_str_value()) {
    value_.str_value_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
    clear_has_value();
  }
}
inline const std::string& GenericFtraceEvent_Field::str_value() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GenericFtraceEvent.Field.str_value)
  if (has_str_value()) {
    return value_.str_value_.GetNoArena();
  }
  return *&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
}
inline void GenericFtraceEvent_Field::set_str_value(const std::string& value) {
  // @@protoc_insertion_point(field_set:perfetto.protos.GenericFtraceEvent.Field.str_value)
  if (!has_str_value()) {
    clear_value();
    set_has_str_value();
    value_.str_value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  value_.str_value_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:perfetto.protos.GenericFtraceEvent.Field.str_value)
}
inline void GenericFtraceEvent_Field::set_str_value(std::string&& value) {
  // @@protoc_insertion_point(field_set:perfetto.protos.GenericFtraceEvent.Field.str_value)
  if (!has_str_value()) {
    clear_value();
    set_has_str_value();
    value_.str_value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  value_.str_value_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:perfetto.protos.GenericFtraceEvent.Field.str_value)
}
inline void GenericFtraceEvent_Field::set_str_value(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  if (!has_str_value()) {
    clear_value();
    set_has_str_value();
    value_.str_value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  value_.str_value_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:perfetto.protos.GenericFtraceEvent.Field.str_value)
}
inline void GenericFtraceEvent_Field::set_str_value(const char* value, size_t size) {
  if (!has_str_value()) {
    clear_value();
    set_has_str_value();
    value_.str_value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  value_.str_value_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.GenericFtraceEvent.Field.str_value)
}
inline std::string* GenericFtraceEvent_Field::mutable_str_value() {
  if (!has_str_value()) {
    clear_value();
    set_has_str_value();
    value_.str_value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_mutable:perfetto.protos.GenericFtraceEvent.Field.str_value)
  return value_.str_value_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* GenericFtraceEvent_Field::release_str_value() {
  // @@protoc_insertion_point(field_release:perfetto.protos.GenericFtraceEvent.Field.str_value)
  if (has_str_value()) {
    clear_has_value();
    return value_.str_value_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  } else {
    return nullptr;
  }
}
inline void GenericFtraceEvent_Field::set_allocated_str_value(std::string* str_value) {
  if (has_value()) {
    clear_value();
  }
  if (str_value != nullptr) {
    set_has_str_value();
    value_.str_value_.UnsafeSetDefault(str_value);
  }
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.GenericFtraceEvent.Field.str_value)
}

// optional int64 int_value = 4;
inline bool GenericFtraceEvent_Field::has_int_value() const {
  return value_case() == kIntValue;
}
inline void GenericFtraceEvent_Field::set_has_int_value() {
  _oneof_case_[0] = kIntValue;
}
inline void GenericFtraceEvent_Field::clear_int_value() {
  if (has_int_value()) {
    value_.int_value_ = PROTOBUF_LONGLONG(0);
    clear_has_value();
  }
}
inline ::PROTOBUF_NAMESPACE_ID::int64 GenericFtraceEvent_Field::int_value() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GenericFtraceEvent.Field.int_value)
  if (has_int_value()) {
    return value_.int_value_;
  }
  return PROTOBUF_LONGLONG(0);
}
inline void GenericFtraceEvent_Field::set_int_value(::PROTOBUF_NAMESPACE_ID::int64 value) {
  if (!has_int_value()) {
    clear_value();
    set_has_int_value();
  }
  value_.int_value_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.GenericFtraceEvent.Field.int_value)
}

// optional uint64 uint_value = 5;
inline bool GenericFtraceEvent_Field::has_uint_value() const {
  return value_case() == kUintValue;
}
inline void GenericFtraceEvent_Field::set_has_uint_value() {
  _oneof_case_[0] = kUintValue;
}
inline void GenericFtraceEvent_Field::clear_uint_value() {
  if (has_uint_value()) {
    value_.uint_value_ = PROTOBUF_ULONGLONG(0);
    clear_has_value();
  }
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 GenericFtraceEvent_Field::uint_value() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GenericFtraceEvent.Field.uint_value)
  if (has_uint_value()) {
    return value_.uint_value_;
  }
  return PROTOBUF_ULONGLONG(0);
}
inline void GenericFtraceEvent_Field::set_uint_value(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  if (!has_uint_value()) {
    clear_value();
    set_has_uint_value();
  }
  value_.uint_value_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.GenericFtraceEvent.Field.uint_value)
}

inline bool GenericFtraceEvent_Field::has_value() const {
  return value_case() != VALUE_NOT_SET;
}
inline void GenericFtraceEvent_Field::clear_has_value() {
  _oneof_case_[0] = VALUE_NOT_SET;
}
inline GenericFtraceEvent_Field::ValueCase GenericFtraceEvent_Field::value_case() const {
  return GenericFtraceEvent_Field::ValueCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// GenericFtraceEvent

// optional string event_name = 1;
inline bool GenericFtraceEvent::has_event_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GenericFtraceEvent::clear_event_name() {
  event_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& GenericFtraceEvent::event_name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GenericFtraceEvent.event_name)
  return event_name_.GetNoArena();
}
inline void GenericFtraceEvent::set_event_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  event_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:perfetto.protos.GenericFtraceEvent.event_name)
}
inline void GenericFtraceEvent::set_event_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  event_name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:perfetto.protos.GenericFtraceEvent.event_name)
}
inline void GenericFtraceEvent::set_event_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  event_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:perfetto.protos.GenericFtraceEvent.event_name)
}
inline void GenericFtraceEvent::set_event_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  event_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.GenericFtraceEvent.event_name)
}
inline std::string* GenericFtraceEvent::mutable_event_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:perfetto.protos.GenericFtraceEvent.event_name)
  return event_name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* GenericFtraceEvent::release_event_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.GenericFtraceEvent.event_name)
  if (!has_event_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return event_name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void GenericFtraceEvent::set_allocated_event_name(std::string* event_name) {
  if (event_name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  event_name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), event_name);
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.GenericFtraceEvent.event_name)
}

// repeated .perfetto.protos.GenericFtraceEvent.Field field = 2;
inline int GenericFtraceEvent::field_size() const {
  return field_.size();
}
inline void GenericFtraceEvent::clear_field() {
  field_.Clear();
}
inline ::perfetto::protos::GenericFtraceEvent_Field* GenericFtraceEvent::mutable_field(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.GenericFtraceEvent.field)
  return field_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::GenericFtraceEvent_Field >*
GenericFtraceEvent::mutable_field() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.GenericFtraceEvent.field)
  return &field_;
}
inline const ::perfetto::protos::GenericFtraceEvent_Field& GenericFtraceEvent::field(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GenericFtraceEvent.field)
  return field_.Get(index);
}
inline ::perfetto::protos::GenericFtraceEvent_Field* GenericFtraceEvent::add_field() {
  // @@protoc_insertion_point(field_add:perfetto.protos.GenericFtraceEvent.field)
  return field_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::GenericFtraceEvent_Field >&
GenericFtraceEvent::field() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.GenericFtraceEvent.field)
  return field_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fgeneric_2eproto
