
#ifndef EMSG_H_
#define EMSG_H_
#ifdef _WIN32
#pragma once
#endif

enum class EMsg
{
	k_EMsgInvalid = 0,

	k_EMsgMulti = 1,

	k_EMsgRemoteSysID = 128,
	k_EMsgFileXferRequest = 1200,
	k_EMsgFileXferResponse = 1201,
	k_EMsgFileXferData = 1202,
	k_EMsgFileXferEnd = 1203,
	k_EMsgFileXferDataAck = 1204,
	k_EMsgChannelEncryptRequest = 1303,
	k_EMsgChannelEncryptResponse = 1304,
	k_EMsgChannelEncryptResult = 1305,
	k_EMsgClientReportOverlayDetourFailure = 5517,
	k_EMsgClientMMSGetLobbyData = 6611,
	k_EMsgClientMMSLobbyData = 6612,
	k_EMsgClientChatAction = 597,
	k_EMsgCSUserContentRequest = 652,
	k_EMsgClientLogOn_Deprecated = 701,
	k_EMsgClientAnonLogOn_Deprecated = 702,
	k_EMsgClientHeartBeat = 703,
	k_EMsgClientVACResponse = 704,
	k_EMsgClientLogOff = 706,
	k_EMsgClientNoUDPConnectivity = 707,
	k_EMsgClientInformOfCreateAccount = 708,
	k_EMsgClientAckVACBan = 709,
	k_EMsgClientConnectionStats = 710,
	k_EMsgClientInitPurchase = 711,
	k_EMsgClientPingResponse = 712,
	k_EMsgClientRemoveFriend = 714,
	k_EMsgClientGamesPlayedNoDataBlob = 715,
	k_EMsgClientChangeStatus = 716,
	k_EMsgClientVacStatusResponse = 717,
	k_EMsgClientFriendMsg = 718,
	k_EMsgClientGetFinalPrice = 722,
	k_EMsgClientSystemIM = 726,
	k_EMsgClientSystemIMAck = 727,
	k_EMsgClientGetLicenses = 728,
	k_EMsgClientCancelLicense = 729,
	k_EMsgClientGetLegacyGameKey = 730,
	k_EMsgClientContentServerLogOn_Deprecated = 731,
	k_EMsgClientAckVACBan2 = 732,
	k_EMsgClientCompletePurchase = 733,
	k_EMsgClientCancelPurchase = 734,
	k_EMsgClientAckMessageByGID = 735,
	k_EMsgClientGetPurchaseReceipts = 736,
	k_EMsgClientAckPurchaseReceipt = 737,
	k_EMsgClientSendGuestPass = 739,
	k_EMsgClientAckGuestPass = 740,
	k_EMsgClientRedeemGuestPass = 741,
	k_EMsgClientGamesPlayed = 742,
	k_EMsgClientRegisterKey = 743,
	k_EMsgClientInviteUserToClan = 744,
	k_EMsgClientAcknowledgeClanInvite = 745,
	k_EMsgClientPurchaseWithMachineID = 746,
	k_EMsgClientAppUsageEvent = 747,
	k_EMsgClientGetGiftTargetList = 748,
	k_EMsgClientGetGiftTargetListResponse = 749,
	k_EMsgClientLogOnResponse = 751,
	k_EMsgClientVACChallenge = 753,
	k_EMsgClientSetHeartbeatRate = 755,
	k_EMsgClientNotLoggedOnDeprecated = 756,
	k_EMsgClientLoggedOff = 757,
	k_EMsgGSApprove = 758,
	k_EMsgGSDeny = 759,
	k_EMsgGSKick = 760,
	k_EMsgClientCreateAcctResponse = 761,
	k_EMsgClientPurchaseResponse = 763,
	k_EMsgClientPing = 764,
	k_EMsgClientNOP = 765,
	k_EMsgClientPersonaState = 766,
	k_EMsgClientFriendsList = 767,
	k_EMsgClientAccountInfo = 768,
	k_EMsgClientVacStatusQuery = 770,
	k_EMsgClientNewsUpdate = 771,
	k_EMsgClientGameConnectDeny = 773,
	k_EMsgGSStatusReply = 774,
	k_EMsgClientGetFinalPriceResponse = 775,
	k_EMsgClientGameConnectTokens = 779,
	k_EMsgClientLicenseList = 780,
	k_EMsgClientCancelLicenseResponse = 781,
	k_EMsgClientVACBanStatus = 782,
	k_EMsgClientCMList = 783,
	k_EMsgClientEncryptPct = 784,
	k_EMsgClientGetLegacyGameKeyResponse = 785,
	k_EMsgCSUserContentApprove = 787,
	k_EMsgCSUserContentDeny = 788,
	k_EMsgClientInitPurchaseResponse = 789,
	k_EMsgClientAddFriend = 791,
	k_EMsgClientAddFriendResponse = 792,
	k_EMsgClientInviteFriend = 793,
	k_EMsgClientInviteFriendResponse = 794,
	k_EMsgClientSendGuestPassResponse = 795,
	k_EMsgClientAckGuestPassResponse = 796,
	k_EMsgClientRedeemGuestPassResponse = 797,
	k_EMsgClientUpdateGuestPassesList = 798,
	k_EMsgClientChatMsg = 799,
	k_EMsgClientChatInvite = 800,
	k_EMsgClientJoinChat = 801,
	k_EMsgClientChatMemberInfo = 802,
	k_EMsgClientLogOnWithCredentials_Deprecated = 803,
	k_EMsgClientPasswordChangeResponse = 805,
	k_EMsgClientChatEnter = 807,
	k_EMsgClientFriendRemovedFromSource = 808,
	k_EMsgClientCreateChat = 809,
	k_EMsgClientCreateChatResponse = 810,
	k_EMsgClientUpdateChatMetadata = 811,
	k_EMsgClientP2PIntroducerMessage = 813,
	k_EMsgClientChatActionResult = 814,
	k_EMsgClientRequestFriendData = 815,
	k_EMsgClientGetUserStats = 818,
	k_EMsgClientGetUserStatsResponse = 819,
	k_EMsgClientStoreUserStats = 820,
	k_EMsgClientStoreUserStatsResponse = 821,
	k_EMsgClientClanState = 822,
	k_EMsgClientServiceModule = 830,
	k_EMsgClientServiceCall = 831,
	k_EMsgClientServiceCallResponse = 832,
	k_EMsgClientNatTraversalStatEvent = 839,
	k_EMsgClientAppInfoRequest = 840,
	k_EMsgClientAppInfoResponse = 841,
	k_EMsgClientSteamUsageEvent = 842,
	k_EMsgClientCheckPassword = 845,
	k_EMsgClientResetPassword = 846,
	k_EMsgClientCheckPasswordResponse = 848,
	k_EMsgClientResetPasswordResponse = 849,
	k_EMsgClientSessionToken = 850,
	k_EMsgClientDRMProblemReport = 851,
	k_EMsgClientSetIgnoreFriend = 855,
	k_EMsgClientSetIgnoreFriendResponse = 856,
	k_EMsgClientGetAppOwnershipTicket = 857,
	k_EMsgClientGetAppOwnershipTicketResponse = 858,
	k_EMsgClientGetLobbyListResponse = 860,
	k_EMsgClientGetLobbyMetadata = 861,
	k_EMsgClientGetLobbyMetadataResponse = 862,
	k_EMsgClientVTTCert = 863,
	k_EMsgClientAppInfoUpdate = 866,
	k_EMsgClientAppInfoChanges = 867,
	k_EMsgClientServerList = 880,
	k_EMsgClientGetFriendsLobbies = 888,
	k_EMsgClientGetFriendsLobbiesResponse = 889,
	k_EMsgClientGetLobbyList = 890,
	k_EMsgClientEmailChangeResponse = 891,
	k_EMsgClientSecretQAChangeResponse = 892,
	k_EMsgClientDRMBlobRequest = 896,
	k_EMsgClientDRMBlobResponse = 897,
	k_EMsgClientLookupKey = 898,
	k_EMsgClientLookupKeyResponse = 899,
	k_EMsgGSDisconnectNotice = 901,
	k_EMsgGSStatus = 903,
	k_EMsgGSUserPlaying = 905,
	k_EMsgGSStatus2 = 906,
	k_EMsgGSStatusUpdate_Unused = 907,
	k_EMsgGSServerType = 908,
	k_EMsgGSPlayerList = 909,
	k_EMsgGSGetUserAchievementStatus = 910,
	k_EMsgGSGetUserAchievementStatusResponse = 911,
	k_EMsgGSGetPlayStats = 918,
	k_EMsgGSGetPlayStatsResponse = 919,
	k_EMsgGSGetUserGroupStatus = 920,
	k_EMsgGSGetUserGroupStatusResponse = 923,
	k_EMsgGSGetReputation = 936,
	k_EMsgGSGetReputationResponse = 937,
	k_EMsgClientChatRoomInfo = 4026,
	k_EMsgClientUFSUploadFileRequest = 5202,
	k_EMsgClientUFSUploadFileResponse = 5203,
	k_EMsgClientUFSUploadFileChunk = 5204,
	k_EMsgClientUFSUploadFileFinished = 5205,
	k_EMsgClientUFSGetFileListForApp = 5206,
	k_EMsgClientUFSGetFileListForAppResponse = 5207,
	k_EMsgClientUFSDownloadRequest = 5210,
	k_EMsgClientUFSDownloadResponse = 5211,
	k_EMsgClientUFSDownloadChunk = 5212,
	k_EMsgClientUFSLoginRequest = 5213,
	k_EMsgClientUFSLoginResponse = 5214,
	k_EMsgClientUFSTransferHeartbeat = 5216,
	k_EMsgClientUFSDeleteFileRequest = 5219,
	k_EMsgClientUFSDeleteFileResponse = 5220,
	k_EMsgClientUFSGetUGCDetails = 5226,
	k_EMsgClientUFSGetUGCDetailsResponse = 5227,
	k_EMsgClientUFSGetSingleFileInfo = 5230,
	k_EMsgClientUFSGetSingleFileInfoResponse = 5231,
	k_EMsgClientUFSShareFile = 5232,
	k_EMsgClientUFSShareFileResponse = 5233,
	k_EMsgClientRequestForgottenPasswordEmail = 5401,
	k_EMsgClientRequestForgottenPasswordEmailResponse = 5402,
	k_EMsgClientCreateAccountResponse = 5403,
	k_EMsgClientResetForgottenPassword = 5404,
	k_EMsgClientResetForgottenPasswordResponse = 5405,
	k_EMsgClientCreateAccount2 = 5406,
	k_EMsgClientInformOfResetForgottenPassword = 5407,
	k_EMsgClientInformOfResetForgottenPasswordResponse = 5408,
	k_EMsgClientAnonUserLogOn_Deprecated = 5409,
	k_EMsgClientGamesPlayedWithDataBlob = 5410,
	k_EMsgClientUpdateUserGameInfo = 5411,
	k_EMsgClientFileToDownload = 5412,
	k_EMsgClientFileToDownloadResponse = 5413,
	k_EMsgClientLBSSetScore = 5414,
	k_EMsgClientLBSSetScoreResponse = 5415,
	k_EMsgClientLBSFindOrCreateLB = 5416,
	k_EMsgClientLBSFindOrCreateLBResponse = 5417,
	k_EMsgClientLBSGetLBEntries = 5418,
	k_EMsgClientLBSGetLBEntriesResponse = 5419,
	k_EMsgClientMarketingMessageUpdate = 5420,
	k_EMsgClientChatDeclined = 5426,
	k_EMsgClientFriendMsgIncoming = 5427,
	k_EMsgClientAuthList_Deprecated = 5428,
	k_EMsgClientTicketAuthComplete = 5429,
	k_EMsgClientIsLimitedAccount = 5430,
	k_EMsgClientAuthList = 5432,
	k_EMsgClientStat = 5433,
	k_EMsgClientP2PConnectionInfo = 5434,
	k_EMsgClientP2PConnectionFailInfo = 5435,
	k_EMsgClientGetNumberOfCurrentPlayers = 5436,
	k_EMsgClientGetNumberOfCurrentPlayersResponse = 5437,
	k_EMsgClientGetDepotDecryptionKey = 5438,
	k_EMsgClientGetDepotDecryptionKeyResponse = 5439,
	k_EMsgGSPerformHardwareSurvey = 5440,
	k_EMsgClientEnableTestLicense = 5443,
	k_EMsgClientEnableTestLicenseResponse = 5444,
	k_EMsgClientDisableTestLicense = 5445,
	k_EMsgClientDisableTestLicenseResponse = 5446,
	k_EMsgClientRequestValidationMail = 5448,
	k_EMsgClientRequestValidationMailResponse = 5449,
	k_EMsgClientToGC = 5452,
	k_EMsgClientFromGC = 5453,
	k_EMsgClientRequestChangeMail = 5454,
	k_EMsgClientRequestChangeMailResponse = 5455,
	k_EMsgClientEmailAddrInfo = 5456,
	k_EMsgClientPasswordChange3 = 5457,
	k_EMsgClientEmailChange3 = 5458,
	k_EMsgClientPersonalQAChange3 = 5459,
	k_EMsgClientResetForgottenPassword3 = 5460,
	k_EMsgClientRequestForgottenPasswordEmail3 = 5461,
	k_EMsgClientCreateAccount3 = 5462,
	k_EMsgClientNewLoginKey = 5463,
	k_EMsgClientNewLoginKeyAccepted = 5464,
	k_EMsgClientLogOnWithHash_Deprecated = 5465,
	k_EMsgClientStoreUserStats2 = 5466,
	k_EMsgClientStatsUpdated = 5467,
	k_EMsgClientActivateOEMLicense = 5468,
	k_EMsgClientRequestedClientStats = 5480,
	k_EMsgClientStat2Int32 = 5481,
	k_EMsgClientStat2 = 5482,
	k_EMsgClientVerifyPassword = 5483,
	k_EMsgClientVerifyPasswordResponse = 5484,
	k_EMsgClientDRMDownloadRequest = 5485,
	k_EMsgClientDRMDownloadResponse = 5486,
	k_EMsgClientDRMFinalResult = 5487,
	k_EMsgClientGetFriendsWhoPlayGame = 5488,
	k_EMsgClientGetFriendsWhoPlayGameResponse = 5489,
	k_EMsgClientOGSBeginSession = 5490,
	k_EMsgClientOGSBeginSessionResponse = 5491,
	k_EMsgClientOGSEndSession = 5492,
	k_EMsgClientOGSEndSessionResponse = 5493,
	k_EMsgClientOGSWriteRow = 5494,
	k_EMsgClientDRMTest = 5495,
	k_EMsgClientDRMTestResult = 5496,
	k_EMsgClientServerUnavailable = 5500,
	k_EMsgClientServersAvailable = 5501,
	k_EMsgClientRegisterAuthTicketWithCM = 5502,
	k_EMsgClientGCMsgFailed = 5503,
	k_EMsgClientMicroTxnAuthRequest = 5504,
	k_EMsgClientMicroTxnAuthorize = 5505,
	k_EMsgClientMicroTxnAuthorizeResponse = 5506,
	k_EMsgClientAppMinutesPlayedData = 5507,
	k_EMsgClientGetMicroTxnInfo = 5508,
	k_EMsgClientGetMicroTxnInfoResponse = 5509,
	k_EMsgClientMarketingMessageUpdate2 = 5510,
	k_EMsgClientDeregisterWithServer = 5511,
	k_EMsgClientSubscribeToPersonaFeed = 5512,
	k_EMsgClientLogon = 5514,
	k_EMsgClientGetClientDetails = 5515,
	k_EMsgClientGetClientDetailsResponse = 5516,
	k_EMsgClientGetClientAppList = 5518,
	k_EMsgClientGetClientAppListResponse = 5519,
	k_EMsgClientInstallClientApp = 5520,
	k_EMsgClientInstallClientAppResponse = 5521,
	k_EMsgClientUninstallClientApp = 5522,
	k_EMsgClientUninstallClientAppResponse = 5523,
	k_EMsgClientSetClientAppUpdateState = 5524,
	k_EMsgClientSetClientAppUpdateStateResponse = 5525,
	k_EMsgClientRequestEncryptedAppTicket = 5526,
	k_EMsgClientRequestEncryptedAppTicketResponse = 5527,
	k_EMsgClientWalletInfoUpdate = 5528,
	k_EMsgClientLBSSetUGC = 5529,
	k_EMsgClientLBSSetUGCResponse = 5530,
	k_EMsgClientAMGetClanOfficers = 5531,
	k_EMsgClientAMGetClanOfficersResponse = 5532,
	k_EMsgClientCheckFileSignature = 5533,
	k_EMsgClientCheckFileSignatureResponse = 5534,
	k_EMsgClientFriendProfileInfo = 5535,
	k_EMsgClientFriendProfileInfoResponse = 5536,
	k_EMsgClientUpdateMachineAuth = 5537,
	k_EMsgClientUpdateMachineAuthResponse = 5538,
	k_EMsgClientReadMachineAuth = 5539,
	k_EMsgClientReadMachineAuthResponse = 5540,
	k_EMsgClientRequestMachineAuth = 5541,
	k_EMsgClientRequestMachineAuthResponse = 5542,
	k_EMsgClientScreenshotsChanged = 5543,
	k_EMsgClientEmailChange4 = 5544,
	k_EMsgClientEmailChangeResponse4 = 5545,
	k_EMsgClientDFSAuthenticateRequest = 5605,
	k_EMsgClientDFSAuthenticateResponse = 5606,
	k_EMsgClientDFSEndSession = 5607,
	k_EMsgClientDFSDownloadStatus = 5617,
	k_EMsgClientMDSLoginRequest = 5801,
	k_EMsgClientMDSLoginResponse = 5802,
	k_EMsgClientMDSUploadManifestRequest = 5803,
	k_EMsgClientMDSUploadManifestResponse = 5804,
	k_EMsgClientMDSTransmitManifestDataChunk = 5805,
	k_EMsgClientMDSHeartbeat = 5806,
	k_EMsgClientMDSUploadDepotChunks = 5807,
	k_EMsgClientMDSUploadDepotChunksResponse = 5808,
	k_EMsgClientMDSInitDepotBuildRequest = 5809,
	k_EMsgClientMDSInitDepotBuildResponse = 5810,
	k_EMsgClientMDSGetDepotManifest = 5818,
	k_EMsgClientMDSGetDepotManifestResponse = 5819,
	k_EMsgClientMDSGetDepotManifestChunk = 5820,
	k_EMsgClientMDSDownloadDepotChunksRequest = 5823,
	k_EMsgClientMDSDownloadDepotChunksAsync = 5824,
	k_EMsgClientMDSDownloadDepotChunksAck = 5825,
	k_EMsgClientMMSCreateLobby = 6601,
	k_EMsgClientMMSCreateLobbyResponse = 6602,
	k_EMsgClientMMSJoinLobby = 6603,
	k_EMsgClientMMSJoinLobbyResponse = 6604,
	k_EMsgClientMMSLeaveLobby = 6605,
	k_EMsgClientMMSLeaveLobbyResponse = 6606,
	k_EMsgClientMMSGetLobbyList = 6607,
	k_EMsgClientMMSGetLobbyListResponse = 6608,
	k_EMsgClientMMSSetLobbyData = 6609,
	k_EMsgClientMMSSetLobbyDataResponse = 6610,
	k_EMsgClientMMSSendLobbyChatMsg = 6613,
	k_EMsgClientMMSLobbyChatMsg = 6614,
	k_EMsgClientMMSSetLobbyOwner = 6615,
	k_EMsgClientMMSSetLobbyOwnerResponse = 6616,
	k_EMsgClientMMSSetLobbyGameServer = 6617,
	k_EMsgClientMMSLobbyGameServerSet = 6618,
	k_EMsgClientMMSUserJoinedLobby = 6619,
	k_EMsgClientMMSUserLeftLobby = 6620,
	k_EMsgClientMMSInviteToLobby = 6621,
	k_EMsgClientUDSP2PSessionStarted = 7001,
	k_EMsgClientUDSP2PSessionEnded = 7002,
	k_EMsgClientUDSInviteToGame = 7005,
	k_EMsgClientUCMAddScreenshot = 7301,
	k_EMsgClientUCMAddScreenshotResponse = 7302,
	k_EMsgClientUCMGetScreenshotList = 7305,
	k_EMsgClientUCMGetScreenshotListResponse = 7306,
	k_EMsgClientUCMDeleteScreenshot = 7309,
	k_EMsgClientUCMDeleteScreenshotResponse = 7310,
	k_EMsgClientRichPresenceUpload = 7501,
	k_EMsgClientRichPresenceRequest = 7502,
	k_EMsgClientRichPresenceInfo = 7503,
};



#endif // !EMSG_H_