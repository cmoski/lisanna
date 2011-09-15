// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: lib/profanity/profanity.proto

#ifndef PROTOBUF_lib_2fprofanity_2fprofanity_2eproto__INCLUDED
#define PROTOBUF_lib_2fprofanity_2fprofanity_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace bnet {
namespace protocol {
namespace profanity {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_lib_2fprofanity_2fprofanity_2eproto();
void protobuf_AssignDesc_lib_2fprofanity_2fprofanity_2eproto();
void protobuf_ShutdownFile_lib_2fprofanity_2fprofanity_2eproto();

class WordFilter;
class WordFilters;

// ===================================================================

class WordFilter : public ::google::protobuf::Message {
 public:
  WordFilter();
  virtual ~WordFilter();
  
  WordFilter(const WordFilter& from);
  
  inline WordFilter& operator=(const WordFilter& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const WordFilter& default_instance();
  
  void Swap(WordFilter* other);
  
  // implements Message ----------------------------------------------
  
  WordFilter* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const WordFilter& from);
  void MergeFrom(const WordFilter& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline const ::std::string& type() const;
  inline void set_type(const ::std::string& value);
  inline void set_type(const char* value);
  inline void set_type(const char* value, size_t size);
  inline ::std::string* mutable_type();
  inline ::std::string* release_type();
  
  // required string regex = 2;
  inline bool has_regex() const;
  inline void clear_regex();
  static const int kRegexFieldNumber = 2;
  inline const ::std::string& regex() const;
  inline void set_regex(const ::std::string& value);
  inline void set_regex(const char* value);
  inline void set_regex(const char* value, size_t size);
  inline ::std::string* mutable_regex();
  inline ::std::string* release_regex();
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.profanity.WordFilter)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_regex();
  inline void clear_has_regex();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* type_;
  ::std::string* regex_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_lib_2fprofanity_2fprofanity_2eproto();
  friend void protobuf_AssignDesc_lib_2fprofanity_2fprofanity_2eproto();
  friend void protobuf_ShutdownFile_lib_2fprofanity_2fprofanity_2eproto();
  
  void InitAsDefaultInstance();
  static WordFilter* default_instance_;
};
// -------------------------------------------------------------------

class WordFilters : public ::google::protobuf::Message {
 public:
  WordFilters();
  virtual ~WordFilters();
  
  WordFilters(const WordFilters& from);
  
  inline WordFilters& operator=(const WordFilters& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const WordFilters& default_instance();
  
  void Swap(WordFilters* other);
  
  // implements Message ----------------------------------------------
  
  WordFilters* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const WordFilters& from);
  void MergeFrom(const WordFilters& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // repeated .bnet.protocol.profanity.WordFilter filters = 1;
  inline int filters_size() const;
  inline void clear_filters();
  static const int kFiltersFieldNumber = 1;
  inline const ::bnet::protocol::profanity::WordFilter& filters(int index) const;
  inline ::bnet::protocol::profanity::WordFilter* mutable_filters(int index);
  inline ::bnet::protocol::profanity::WordFilter* add_filters();
  inline const ::google::protobuf::RepeatedPtrField< ::bnet::protocol::profanity::WordFilter >&
      filters() const;
  inline ::google::protobuf::RepeatedPtrField< ::bnet::protocol::profanity::WordFilter >*
      mutable_filters();
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.profanity.WordFilters)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::bnet::protocol::profanity::WordFilter > filters_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_lib_2fprofanity_2fprofanity_2eproto();
  friend void protobuf_AssignDesc_lib_2fprofanity_2fprofanity_2eproto();
  friend void protobuf_ShutdownFile_lib_2fprofanity_2fprofanity_2eproto();
  
  void InitAsDefaultInstance();
  static WordFilters* default_instance_;
};
// ===================================================================


// ===================================================================

// WordFilter

// required string type = 1;
inline bool WordFilter::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WordFilter::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WordFilter::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WordFilter::clear_type() {
  if (type_ != &::google::protobuf::internal::kEmptyString) {
    type_->clear();
  }
  clear_has_type();
}
inline const ::std::string& WordFilter::type() const {
  return *type_;
}
inline void WordFilter::set_type(const ::std::string& value) {
  set_has_type();
  if (type_ == &::google::protobuf::internal::kEmptyString) {
    type_ = new ::std::string;
  }
  type_->assign(value);
}
inline void WordFilter::set_type(const char* value) {
  set_has_type();
  if (type_ == &::google::protobuf::internal::kEmptyString) {
    type_ = new ::std::string;
  }
  type_->assign(value);
}
inline void WordFilter::set_type(const char* value, size_t size) {
  set_has_type();
  if (type_ == &::google::protobuf::internal::kEmptyString) {
    type_ = new ::std::string;
  }
  type_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* WordFilter::mutable_type() {
  set_has_type();
  if (type_ == &::google::protobuf::internal::kEmptyString) {
    type_ = new ::std::string;
  }
  return type_;
}
inline ::std::string* WordFilter::release_type() {
  clear_has_type();
  if (type_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = type_;
    type_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string regex = 2;
inline bool WordFilter::has_regex() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WordFilter::set_has_regex() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WordFilter::clear_has_regex() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WordFilter::clear_regex() {
  if (regex_ != &::google::protobuf::internal::kEmptyString) {
    regex_->clear();
  }
  clear_has_regex();
}
inline const ::std::string& WordFilter::regex() const {
  return *regex_;
}
inline void WordFilter::set_regex(const ::std::string& value) {
  set_has_regex();
  if (regex_ == &::google::protobuf::internal::kEmptyString) {
    regex_ = new ::std::string;
  }
  regex_->assign(value);
}
inline void WordFilter::set_regex(const char* value) {
  set_has_regex();
  if (regex_ == &::google::protobuf::internal::kEmptyString) {
    regex_ = new ::std::string;
  }
  regex_->assign(value);
}
inline void WordFilter::set_regex(const char* value, size_t size) {
  set_has_regex();
  if (regex_ == &::google::protobuf::internal::kEmptyString) {
    regex_ = new ::std::string;
  }
  regex_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* WordFilter::mutable_regex() {
  set_has_regex();
  if (regex_ == &::google::protobuf::internal::kEmptyString) {
    regex_ = new ::std::string;
  }
  return regex_;
}
inline ::std::string* WordFilter::release_regex() {
  clear_has_regex();
  if (regex_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = regex_;
    regex_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// WordFilters

// repeated .bnet.protocol.profanity.WordFilter filters = 1;
inline int WordFilters::filters_size() const {
  return filters_.size();
}
inline void WordFilters::clear_filters() {
  filters_.Clear();
}
inline const ::bnet::protocol::profanity::WordFilter& WordFilters::filters(int index) const {
  return filters_.Get(index);
}
inline ::bnet::protocol::profanity::WordFilter* WordFilters::mutable_filters(int index) {
  return filters_.Mutable(index);
}
inline ::bnet::protocol::profanity::WordFilter* WordFilters::add_filters() {
  return filters_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::bnet::protocol::profanity::WordFilter >&
WordFilters::filters() const {
  return filters_;
}
inline ::google::protobuf::RepeatedPtrField< ::bnet::protocol::profanity::WordFilter >*
WordFilters::mutable_filters() {
  return &filters_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace profanity
}  // namespace protocol
}  // namespace bnet

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_lib_2fprofanity_2fprofanity_2eproto__INCLUDED
