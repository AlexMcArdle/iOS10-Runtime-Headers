/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRContentItemMetadataProtobuf : PBCodable <NSCopying> {
    NSString * _albumArtistName;
    NSString * _albumName;
    NSData * _appMetricsData;
    bool  _artworkAvailable;
    NSString * _artworkMIMEType;
    NSString * _assetURL;
    int  _chapterCount;
    NSString * _collectionIdentifier;
    NSString * _composer;
    NSString * _contentIdentifier;
    float  _defaultPlaybackRate;
    NSString * _directorName;
    int  _discNumber;
    float  _downloadProgress;
    int  _downloadState;
    double  _duration;
    int  _editingStyleFlags;
    double  _elapsedTime;
    int  _episodeNumber;
    NSString * _genre;
    struct { 
        unsigned int duration : 1; 
        unsigned int elapsedTime : 1; 
        unsigned int iTunesAlbumIdentifier : 1; 
        unsigned int iTunesArtistIdentifier : 1; 
        unsigned int iTunesIdentifier : 1; 
        unsigned int iTunesSubscriptionIdentifier : 1; 
        unsigned int radioStationIdentifier : 1; 
        unsigned int releaseDate : 1; 
        unsigned int startTime : 1; 
        unsigned int chapterCount : 1; 
        unsigned int defaultPlaybackRate : 1; 
        unsigned int discNumber : 1; 
        unsigned int downloadProgress : 1; 
        unsigned int downloadState : 1; 
        unsigned int editingStyleFlags : 1; 
        unsigned int episodeNumber : 1; 
        unsigned int mediaSubType : 1; 
        unsigned int mediaType : 1; 
        unsigned int numberOfSections : 1; 
        unsigned int playCount : 1; 
        unsigned int playbackProgress : 1; 
        unsigned int playbackRate : 1; 
        unsigned int playlistType : 1; 
        unsigned int radioStationType : 1; 
        unsigned int seasonNumber : 1; 
        unsigned int totalDiscCount : 1; 
        unsigned int totalTrackCount : 1; 
        unsigned int trackNumber : 1; 
        unsigned int artworkAvailable : 1; 
        unsigned int infoAvailable : 1; 
        unsigned int isAdvertisement : 1; 
        unsigned int isAlwaysLive : 1; 
        unsigned int isBanned : 1; 
        unsigned int isContainer : 1; 
        unsigned int isCurrentlyPlaying : 1; 
        unsigned int isExplicitItem : 1; 
        unsigned int isInWishList : 1; 
        unsigned int isLiked : 1; 
        unsigned int isPlayable : 1; 
        unsigned int isSharable : 1; 
        unsigned int isStreamingContent : 1; 
        unsigned int languageOptionsAvailable : 1; 
        unsigned int lyricsAvailable : 1; 
    }  _has;
    long long  _iTunesAlbumIdentifier;
    long long  _iTunesArtistIdentifier;
    long long  _iTunesIdentifier;
    long long  _iTunesSubscriptionIdentifier;
    bool  _infoAvailable;
    bool  _isAdvertisement;
    bool  _isAlwaysLive;
    bool  _isBanned;
    bool  _isContainer;
    bool  _isCurrentlyPlaying;
    bool  _isExplicitItem;
    bool  _isInWishList;
    bool  _isLiked;
    bool  _isPlayable;
    bool  _isSharable;
    bool  _isStreamingContent;
    bool  _languageOptionsAvailable;
    NSString * _localizedContentRating;
    bool  _lyricsAvailable;
    int  _mediaSubType;
    int  _mediaType;
    NSData * _nowPlayingInfo;
    int  _numberOfSections;
    int  _playCount;
    float  _playbackProgress;
    float  _playbackRate;
    int  _playlistType;
    NSString * _profileIdentifier;
    NSData * _purchaseInfoData;
    NSString * _radioStationHash;
    long long  _radioStationIdentifier;
    NSString * _radioStationName;
    NSString * _radioStationString;
    int  _radioStationType;
    double  _releaseDate;
    int  _seasonNumber;
    NSString * _seriesName;
    double  _startTime;
    NSString * _subtitle;
    NSString * _title;
    int  _totalDiscCount;
    int  _totalTrackCount;
    NSString * _trackArtistName;
    int  _trackNumber;
}

@property (nonatomic, retain) NSString *albumArtistName;
@property (nonatomic, retain) NSString *albumName;
@property (nonatomic, retain) NSData *appMetricsData;
@property (nonatomic) bool artworkAvailable;
@property (nonatomic, retain) NSString *artworkMIMEType;
@property (nonatomic, retain) NSString *assetURL;
@property (nonatomic) int chapterCount;
@property (nonatomic, retain) NSString *collectionIdentifier;
@property (nonatomic, retain) NSString *composer;
@property (nonatomic, retain) NSString *contentIdentifier;
@property (nonatomic) float defaultPlaybackRate;
@property (nonatomic, retain) NSString *directorName;
@property (nonatomic) int discNumber;
@property (nonatomic) float downloadProgress;
@property (nonatomic) int downloadState;
@property (nonatomic) double duration;
@property (nonatomic) int editingStyleFlags;
@property (nonatomic) double elapsedTime;
@property (nonatomic) int episodeNumber;
@property (nonatomic, retain) NSString *genre;
@property (nonatomic, readonly) bool hasAlbumArtistName;
@property (nonatomic, readonly) bool hasAlbumName;
@property (nonatomic, readonly) bool hasAppMetricsData;
@property (nonatomic) bool hasArtworkAvailable;
@property (nonatomic, readonly) bool hasArtworkMIMEType;
@property (nonatomic, readonly) bool hasAssetURL;
@property (nonatomic) bool hasChapterCount;
@property (nonatomic, readonly) bool hasCollectionIdentifier;
@property (nonatomic, readonly) bool hasComposer;
@property (nonatomic, readonly) bool hasContentIdentifier;
@property (nonatomic) bool hasDefaultPlaybackRate;
@property (nonatomic, readonly) bool hasDirectorName;
@property (nonatomic) bool hasDiscNumber;
@property (nonatomic) bool hasDownloadProgress;
@property (nonatomic) bool hasDownloadState;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasEditingStyleFlags;
@property (nonatomic) bool hasElapsedTime;
@property (nonatomic) bool hasEpisodeNumber;
@property (nonatomic, readonly) bool hasGenre;
@property (nonatomic) bool hasITunesAlbumIdentifier;
@property (nonatomic) bool hasITunesArtistIdentifier;
@property (nonatomic) bool hasITunesIdentifier;
@property (nonatomic) bool hasITunesSubscriptionIdentifier;
@property (nonatomic) bool hasInfoAvailable;
@property (nonatomic) bool hasIsAdvertisement;
@property (nonatomic) bool hasIsAlwaysLive;
@property (nonatomic) bool hasIsBanned;
@property (nonatomic) bool hasIsContainer;
@property (nonatomic) bool hasIsCurrentlyPlaying;
@property (nonatomic) bool hasIsExplicitItem;
@property (nonatomic) bool hasIsInWishList;
@property (nonatomic) bool hasIsLiked;
@property (nonatomic) bool hasIsPlayable;
@property (nonatomic) bool hasIsSharable;
@property (nonatomic) bool hasIsStreamingContent;
@property (nonatomic) bool hasLanguageOptionsAvailable;
@property (nonatomic, readonly) bool hasLocalizedContentRating;
@property (nonatomic) bool hasLyricsAvailable;
@property (nonatomic) bool hasMediaSubType;
@property (nonatomic) bool hasMediaType;
@property (nonatomic, readonly) bool hasNowPlayingInfo;
@property (nonatomic) bool hasNumberOfSections;
@property (nonatomic) bool hasPlayCount;
@property (nonatomic) bool hasPlaybackProgress;
@property (nonatomic) bool hasPlaybackRate;
@property (nonatomic) bool hasPlaylistType;
@property (nonatomic, readonly) bool hasProfileIdentifier;
@property (nonatomic, readonly) bool hasPurchaseInfoData;
@property (nonatomic, readonly) bool hasRadioStationHash;
@property (nonatomic) bool hasRadioStationIdentifier;
@property (nonatomic, readonly) bool hasRadioStationName;
@property (nonatomic, readonly) bool hasRadioStationString;
@property (nonatomic) bool hasRadioStationType;
@property (nonatomic) bool hasReleaseDate;
@property (nonatomic) bool hasSeasonNumber;
@property (nonatomic, readonly) bool hasSeriesName;
@property (nonatomic) bool hasStartTime;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) bool hasTotalDiscCount;
@property (nonatomic) bool hasTotalTrackCount;
@property (nonatomic, readonly) bool hasTrackArtistName;
@property (nonatomic) bool hasTrackNumber;
@property (nonatomic) long long iTunesAlbumIdentifier;
@property (nonatomic) long long iTunesArtistIdentifier;
@property (nonatomic) long long iTunesIdentifier;
@property (nonatomic) long long iTunesSubscriptionIdentifier;
@property (nonatomic) bool infoAvailable;
@property (nonatomic) bool isAdvertisement;
@property (nonatomic) bool isAlwaysLive;
@property (nonatomic) bool isBanned;
@property (nonatomic) bool isContainer;
@property (nonatomic) bool isCurrentlyPlaying;
@property (nonatomic) bool isExplicitItem;
@property (nonatomic) bool isInWishList;
@property (nonatomic) bool isLiked;
@property (nonatomic) bool isPlayable;
@property (nonatomic) bool isSharable;
@property (nonatomic) bool isStreamingContent;
@property (nonatomic) bool languageOptionsAvailable;
@property (nonatomic, retain) NSString *localizedContentRating;
@property (nonatomic) bool lyricsAvailable;
@property (nonatomic) int mediaSubType;
@property (nonatomic) int mediaType;
@property (nonatomic, retain) NSData *nowPlayingInfo;
@property (nonatomic) int numberOfSections;
@property (nonatomic) int playCount;
@property (nonatomic) float playbackProgress;
@property (nonatomic) float playbackRate;
@property (nonatomic) int playlistType;
@property (nonatomic, retain) NSString *profileIdentifier;
@property (nonatomic, retain) NSData *purchaseInfoData;
@property (nonatomic, retain) NSString *radioStationHash;
@property (nonatomic) long long radioStationIdentifier;
@property (nonatomic, retain) NSString *radioStationName;
@property (nonatomic, retain) NSString *radioStationString;
@property (nonatomic) int radioStationType;
@property (nonatomic) double releaseDate;
@property (nonatomic) int seasonNumber;
@property (nonatomic, retain) NSString *seriesName;
@property (nonatomic) double startTime;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) int totalDiscCount;
@property (nonatomic) int totalTrackCount;
@property (nonatomic, retain) NSString *trackArtistName;
@property (nonatomic) int trackNumber;

- (id)albumArtistName;
- (id)albumName;
- (id)appMetricsData;
- (bool)artworkAvailable;
- (id)artworkMIMEType;
- (id)assetURL;
- (int)chapterCount;
- (id)collectionIdentifier;
- (id)composer;
- (id)contentIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (float)defaultPlaybackRate;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directorName;
- (int)discNumber;
- (float)downloadProgress;
- (int)downloadState;
- (double)duration;
- (int)editingStyleFlags;
- (double)elapsedTime;
- (int)episodeNumber;
- (id)genre;
- (bool)hasAlbumArtistName;
- (bool)hasAlbumName;
- (bool)hasAppMetricsData;
- (bool)hasArtworkAvailable;
- (bool)hasArtworkMIMEType;
- (bool)hasAssetURL;
- (bool)hasChapterCount;
- (bool)hasCollectionIdentifier;
- (bool)hasComposer;
- (bool)hasContentIdentifier;
- (bool)hasDefaultPlaybackRate;
- (bool)hasDirectorName;
- (bool)hasDiscNumber;
- (bool)hasDownloadProgress;
- (bool)hasDownloadState;
- (bool)hasDuration;
- (bool)hasEditingStyleFlags;
- (bool)hasElapsedTime;
- (bool)hasEpisodeNumber;
- (bool)hasGenre;
- (bool)hasITunesAlbumIdentifier;
- (bool)hasITunesArtistIdentifier;
- (bool)hasITunesIdentifier;
- (bool)hasITunesSubscriptionIdentifier;
- (bool)hasInfoAvailable;
- (bool)hasIsAdvertisement;
- (bool)hasIsAlwaysLive;
- (bool)hasIsBanned;
- (bool)hasIsContainer;
- (bool)hasIsCurrentlyPlaying;
- (bool)hasIsExplicitItem;
- (bool)hasIsInWishList;
- (bool)hasIsLiked;
- (bool)hasIsPlayable;
- (bool)hasIsSharable;
- (bool)hasIsStreamingContent;
- (bool)hasLanguageOptionsAvailable;
- (bool)hasLocalizedContentRating;
- (bool)hasLyricsAvailable;
- (bool)hasMediaSubType;
- (bool)hasMediaType;
- (bool)hasNowPlayingInfo;
- (bool)hasNumberOfSections;
- (bool)hasPlayCount;
- (bool)hasPlaybackProgress;
- (bool)hasPlaybackRate;
- (bool)hasPlaylistType;
- (bool)hasProfileIdentifier;
- (bool)hasPurchaseInfoData;
- (bool)hasRadioStationHash;
- (bool)hasRadioStationIdentifier;
- (bool)hasRadioStationName;
- (bool)hasRadioStationString;
- (bool)hasRadioStationType;
- (bool)hasReleaseDate;
- (bool)hasSeasonNumber;
- (bool)hasSeriesName;
- (bool)hasStartTime;
- (bool)hasSubtitle;
- (bool)hasTitle;
- (bool)hasTotalDiscCount;
- (bool)hasTotalTrackCount;
- (bool)hasTrackArtistName;
- (bool)hasTrackNumber;
- (unsigned long long)hash;
- (long long)iTunesAlbumIdentifier;
- (long long)iTunesArtistIdentifier;
- (long long)iTunesIdentifier;
- (long long)iTunesSubscriptionIdentifier;
- (bool)infoAvailable;
- (bool)isAdvertisement;
- (bool)isAlwaysLive;
- (bool)isBanned;
- (bool)isContainer;
- (bool)isCurrentlyPlaying;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitItem;
- (bool)isInWishList;
- (bool)isLiked;
- (bool)isPlayable;
- (bool)isSharable;
- (bool)isStreamingContent;
- (bool)languageOptionsAvailable;
- (id)localizedContentRating;
- (bool)lyricsAvailable;
- (int)mediaSubType;
- (int)mediaType;
- (void)mergeFrom:(id)arg1;
- (id)nowPlayingInfo;
- (int)numberOfSections;
- (int)playCount;
- (float)playbackProgress;
- (float)playbackRate;
- (int)playlistType;
- (id)profileIdentifier;
- (id)purchaseInfoData;
- (id)radioStationHash;
- (long long)radioStationIdentifier;
- (id)radioStationName;
- (id)radioStationString;
- (int)radioStationType;
- (bool)readFrom:(id)arg1;
- (double)releaseDate;
- (int)seasonNumber;
- (id)seriesName;
- (void)setAlbumArtistName:(id)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setAppMetricsData:(id)arg1;
- (void)setArtworkAvailable:(bool)arg1;
- (void)setArtworkMIMEType:(id)arg1;
- (void)setAssetURL:(id)arg1;
- (void)setChapterCount:(int)arg1;
- (void)setCollectionIdentifier:(id)arg1;
- (void)setComposer:(id)arg1;
- (void)setContentIdentifier:(id)arg1;
- (void)setDefaultPlaybackRate:(float)arg1;
- (void)setDirectorName:(id)arg1;
- (void)setDiscNumber:(int)arg1;
- (void)setDownloadProgress:(float)arg1;
- (void)setDownloadState:(int)arg1;
- (void)setDuration:(double)arg1;
- (void)setEditingStyleFlags:(int)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setEpisodeNumber:(int)arg1;
- (void)setGenre:(id)arg1;
- (void)setHasArtworkAvailable:(bool)arg1;
- (void)setHasChapterCount:(bool)arg1;
- (void)setHasDefaultPlaybackRate:(bool)arg1;
- (void)setHasDiscNumber:(bool)arg1;
- (void)setHasDownloadProgress:(bool)arg1;
- (void)setHasDownloadState:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasEditingStyleFlags:(bool)arg1;
- (void)setHasElapsedTime:(bool)arg1;
- (void)setHasEpisodeNumber:(bool)arg1;
- (void)setHasITunesAlbumIdentifier:(bool)arg1;
- (void)setHasITunesArtistIdentifier:(bool)arg1;
- (void)setHasITunesIdentifier:(bool)arg1;
- (void)setHasITunesSubscriptionIdentifier:(bool)arg1;
- (void)setHasInfoAvailable:(bool)arg1;
- (void)setHasIsAdvertisement:(bool)arg1;
- (void)setHasIsAlwaysLive:(bool)arg1;
- (void)setHasIsBanned:(bool)arg1;
- (void)setHasIsContainer:(bool)arg1;
- (void)setHasIsCurrentlyPlaying:(bool)arg1;
- (void)setHasIsExplicitItem:(bool)arg1;
- (void)setHasIsInWishList:(bool)arg1;
- (void)setHasIsLiked:(bool)arg1;
- (void)setHasIsPlayable:(bool)arg1;
- (void)setHasIsSharable:(bool)arg1;
- (void)setHasIsStreamingContent:(bool)arg1;
- (void)setHasLanguageOptionsAvailable:(bool)arg1;
- (void)setHasLyricsAvailable:(bool)arg1;
- (void)setHasMediaSubType:(bool)arg1;
- (void)setHasMediaType:(bool)arg1;
- (void)setHasNumberOfSections:(bool)arg1;
- (void)setHasPlayCount:(bool)arg1;
- (void)setHasPlaybackProgress:(bool)arg1;
- (void)setHasPlaybackRate:(bool)arg1;
- (void)setHasPlaylistType:(bool)arg1;
- (void)setHasRadioStationIdentifier:(bool)arg1;
- (void)setHasRadioStationType:(bool)arg1;
- (void)setHasReleaseDate:(bool)arg1;
- (void)setHasSeasonNumber:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHasTotalDiscCount:(bool)arg1;
- (void)setHasTotalTrackCount:(bool)arg1;
- (void)setHasTrackNumber:(bool)arg1;
- (void)setITunesAlbumIdentifier:(long long)arg1;
- (void)setITunesArtistIdentifier:(long long)arg1;
- (void)setITunesIdentifier:(long long)arg1;
- (void)setITunesSubscriptionIdentifier:(long long)arg1;
- (void)setInfoAvailable:(bool)arg1;
- (void)setIsAdvertisement:(bool)arg1;
- (void)setIsAlwaysLive:(bool)arg1;
- (void)setIsBanned:(bool)arg1;
- (void)setIsContainer:(bool)arg1;
- (void)setIsCurrentlyPlaying:(bool)arg1;
- (void)setIsExplicitItem:(bool)arg1;
- (void)setIsInWishList:(bool)arg1;
- (void)setIsLiked:(bool)arg1;
- (void)setIsPlayable:(bool)arg1;
- (void)setIsSharable:(bool)arg1;
- (void)setIsStreamingContent:(bool)arg1;
- (void)setLanguageOptionsAvailable:(bool)arg1;
- (void)setLocalizedContentRating:(id)arg1;
- (void)setLyricsAvailable:(bool)arg1;
- (void)setMediaSubType:(int)arg1;
- (void)setMediaType:(int)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setNumberOfSections:(int)arg1;
- (void)setPlayCount:(int)arg1;
- (void)setPlaybackProgress:(float)arg1;
- (void)setPlaybackRate:(float)arg1;
- (void)setPlaylistType:(int)arg1;
- (void)setProfileIdentifier:(id)arg1;
- (void)setPurchaseInfoData:(id)arg1;
- (void)setRadioStationHash:(id)arg1;
- (void)setRadioStationIdentifier:(long long)arg1;
- (void)setRadioStationName:(id)arg1;
- (void)setRadioStationString:(id)arg1;
- (void)setRadioStationType:(int)arg1;
- (void)setReleaseDate:(double)arg1;
- (void)setSeasonNumber:(int)arg1;
- (void)setSeriesName:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTotalDiscCount:(int)arg1;
- (void)setTotalTrackCount:(int)arg1;
- (void)setTrackArtistName:(id)arg1;
- (void)setTrackNumber:(int)arg1;
- (double)startTime;
- (id)subtitle;
- (id)title;
- (int)totalDiscCount;
- (int)totalTrackCount;
- (id)trackArtistName;
- (int)trackNumber;
- (void)writeTo:(id)arg1;

@end
