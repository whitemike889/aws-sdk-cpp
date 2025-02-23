﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/Tag.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class AWS_TRANSCRIBESERVICE_API CreateMedicalVocabularyRequest : public TranscribeServiceRequest
  {
  public:
    CreateMedicalVocabularyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMedicalVocabulary"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the custom vocabulary. This case-sensitive name must be unique
     * within an Amazon Web Services account. If you try to create a vocabulary with
     * the same name as a previous vocabulary, you get a <code>ConflictException</code>
     * error.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the custom vocabulary. This case-sensitive name must be unique
     * within an Amazon Web Services account. If you try to create a vocabulary with
     * the same name as a previous vocabulary, you get a <code>ConflictException</code>
     * error.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of the custom vocabulary. This case-sensitive name must be unique
     * within an Amazon Web Services account. If you try to create a vocabulary with
     * the same name as a previous vocabulary, you get a <code>ConflictException</code>
     * error.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of the custom vocabulary. This case-sensitive name must be unique
     * within an Amazon Web Services account. If you try to create a vocabulary with
     * the same name as a previous vocabulary, you get a <code>ConflictException</code>
     * error.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the custom vocabulary. This case-sensitive name must be unique
     * within an Amazon Web Services account. If you try to create a vocabulary with
     * the same name as a previous vocabulary, you get a <code>ConflictException</code>
     * error.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of the custom vocabulary. This case-sensitive name must be unique
     * within an Amazon Web Services account. If you try to create a vocabulary with
     * the same name as a previous vocabulary, you get a <code>ConflictException</code>
     * error.</p>
     */
    inline CreateMedicalVocabularyRequest& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the custom vocabulary. This case-sensitive name must be unique
     * within an Amazon Web Services account. If you try to create a vocabulary with
     * the same name as a previous vocabulary, you get a <code>ConflictException</code>
     * error.</p>
     */
    inline CreateMedicalVocabularyRequest& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom vocabulary. This case-sensitive name must be unique
     * within an Amazon Web Services account. If you try to create a vocabulary with
     * the same name as a previous vocabulary, you get a <code>ConflictException</code>
     * error.</p>
     */
    inline CreateMedicalVocabularyRequest& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The language code for the language used for the entries in your custom
     * vocabulary. The language code of your custom vocabulary must match the language
     * code of your transcription job. US English (en-US) is the only language code
     * available for Amazon Transcribe Medical.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code for the language used for the entries in your custom
     * vocabulary. The language code of your custom vocabulary must match the language
     * code of your transcription job. US English (en-US) is the only language code
     * available for Amazon Transcribe Medical.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code for the language used for the entries in your custom
     * vocabulary. The language code of your custom vocabulary must match the language
     * code of your transcription job. US English (en-US) is the only language code
     * available for Amazon Transcribe Medical.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code for the language used for the entries in your custom
     * vocabulary. The language code of your custom vocabulary must match the language
     * code of your transcription job. US English (en-US) is the only language code
     * available for Amazon Transcribe Medical.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code for the language used for the entries in your custom
     * vocabulary. The language code of your custom vocabulary must match the language
     * code of your transcription job. US English (en-US) is the only language code
     * available for Amazon Transcribe Medical.</p>
     */
    inline CreateMedicalVocabularyRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code for the language used for the entries in your custom
     * vocabulary. The language code of your custom vocabulary must match the language
     * code of your transcription job. US English (en-US) is the only language code
     * available for Amazon Transcribe Medical.</p>
     */
    inline CreateMedicalVocabularyRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The location in Amazon S3 of the text file you use to define your custom
     * vocabulary. The URI must be in the same Amazon Web Services Region as the
     * resource that you're calling. Enter information about your
     * <code>VocabularyFileUri</code> in the following format:</p> <p>
     * <code>https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;</code>
     * </p> <p>The following is an example URI for a vocabulary file that is stored in
     * Amazon S3:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/AWSDOC-EXAMPLE-BUCKET/vocab.txt</code>
     * </p> <p>For more information about Amazon S3 object names, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-med.html">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline const Aws::String& GetVocabularyFileUri() const{ return m_vocabularyFileUri; }

    /**
     * <p>The location in Amazon S3 of the text file you use to define your custom
     * vocabulary. The URI must be in the same Amazon Web Services Region as the
     * resource that you're calling. Enter information about your
     * <code>VocabularyFileUri</code> in the following format:</p> <p>
     * <code>https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;</code>
     * </p> <p>The following is an example URI for a vocabulary file that is stored in
     * Amazon S3:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/AWSDOC-EXAMPLE-BUCKET/vocab.txt</code>
     * </p> <p>For more information about Amazon S3 object names, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-med.html">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline bool VocabularyFileUriHasBeenSet() const { return m_vocabularyFileUriHasBeenSet; }

    /**
     * <p>The location in Amazon S3 of the text file you use to define your custom
     * vocabulary. The URI must be in the same Amazon Web Services Region as the
     * resource that you're calling. Enter information about your
     * <code>VocabularyFileUri</code> in the following format:</p> <p>
     * <code>https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;</code>
     * </p> <p>The following is an example URI for a vocabulary file that is stored in
     * Amazon S3:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/AWSDOC-EXAMPLE-BUCKET/vocab.txt</code>
     * </p> <p>For more information about Amazon S3 object names, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-med.html">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline void SetVocabularyFileUri(const Aws::String& value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri = value; }

    /**
     * <p>The location in Amazon S3 of the text file you use to define your custom
     * vocabulary. The URI must be in the same Amazon Web Services Region as the
     * resource that you're calling. Enter information about your
     * <code>VocabularyFileUri</code> in the following format:</p> <p>
     * <code>https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;</code>
     * </p> <p>The following is an example URI for a vocabulary file that is stored in
     * Amazon S3:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/AWSDOC-EXAMPLE-BUCKET/vocab.txt</code>
     * </p> <p>For more information about Amazon S3 object names, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-med.html">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline void SetVocabularyFileUri(Aws::String&& value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri = std::move(value); }

    /**
     * <p>The location in Amazon S3 of the text file you use to define your custom
     * vocabulary. The URI must be in the same Amazon Web Services Region as the
     * resource that you're calling. Enter information about your
     * <code>VocabularyFileUri</code> in the following format:</p> <p>
     * <code>https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;</code>
     * </p> <p>The following is an example URI for a vocabulary file that is stored in
     * Amazon S3:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/AWSDOC-EXAMPLE-BUCKET/vocab.txt</code>
     * </p> <p>For more information about Amazon S3 object names, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-med.html">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline void SetVocabularyFileUri(const char* value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri.assign(value); }

    /**
     * <p>The location in Amazon S3 of the text file you use to define your custom
     * vocabulary. The URI must be in the same Amazon Web Services Region as the
     * resource that you're calling. Enter information about your
     * <code>VocabularyFileUri</code> in the following format:</p> <p>
     * <code>https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;</code>
     * </p> <p>The following is an example URI for a vocabulary file that is stored in
     * Amazon S3:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/AWSDOC-EXAMPLE-BUCKET/vocab.txt</code>
     * </p> <p>For more information about Amazon S3 object names, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-med.html">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline CreateMedicalVocabularyRequest& WithVocabularyFileUri(const Aws::String& value) { SetVocabularyFileUri(value); return *this;}

    /**
     * <p>The location in Amazon S3 of the text file you use to define your custom
     * vocabulary. The URI must be in the same Amazon Web Services Region as the
     * resource that you're calling. Enter information about your
     * <code>VocabularyFileUri</code> in the following format:</p> <p>
     * <code>https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;</code>
     * </p> <p>The following is an example URI for a vocabulary file that is stored in
     * Amazon S3:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/AWSDOC-EXAMPLE-BUCKET/vocab.txt</code>
     * </p> <p>For more information about Amazon S3 object names, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-med.html">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline CreateMedicalVocabularyRequest& WithVocabularyFileUri(Aws::String&& value) { SetVocabularyFileUri(std::move(value)); return *this;}

    /**
     * <p>The location in Amazon S3 of the text file you use to define your custom
     * vocabulary. The URI must be in the same Amazon Web Services Region as the
     * resource that you're calling. Enter information about your
     * <code>VocabularyFileUri</code> in the following format:</p> <p>
     * <code>https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;</code>
     * </p> <p>The following is an example URI for a vocabulary file that is stored in
     * Amazon S3:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/AWSDOC-EXAMPLE-BUCKET/vocab.txt</code>
     * </p> <p>For more information about Amazon S3 object names, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-med.html">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline CreateMedicalVocabularyRequest& WithVocabularyFileUri(const char* value) { SetVocabularyFileUri(value); return *this;}


    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new medical
     * vocabulary at the time you create this new vocabulary.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new medical
     * vocabulary at the time you create this new vocabulary.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new medical
     * vocabulary at the time you create this new vocabulary.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new medical
     * vocabulary at the time you create this new vocabulary.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new medical
     * vocabulary at the time you create this new vocabulary.</p>
     */
    inline CreateMedicalVocabularyRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new medical
     * vocabulary at the time you create this new vocabulary.</p>
     */
    inline CreateMedicalVocabularyRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new medical
     * vocabulary at the time you create this new vocabulary.</p>
     */
    inline CreateMedicalVocabularyRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new medical
     * vocabulary at the time you create this new vocabulary.</p>
     */
    inline CreateMedicalVocabularyRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    Aws::String m_vocabularyFileUri;
    bool m_vocabularyFileUriHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
