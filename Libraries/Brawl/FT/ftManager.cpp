//
// Created by johno on 7/15/2020.
//

#include "ftManager.h"

playerNumber FtManager::getPlayerNo(EntryID entry) {
    return _getPlayerNo_ftManager(this, entry);
}

EntryID FtManager::getEntryId(playerNumber playerNo) {
    return _getEntryID_ftManager(this, playerNo);
}

FtOwner * FtManager::getOwner(EntryID entry) {
    return _getOwner_ftManager(this, entry);
}

EntryID FtManager::getEntryIdFromIndex(int index) {
    return _getEntryIDFromIndex_ftManager(this, index);
}

Fighter* FtManager::getFighter(EntryID entry, bool getFollower) {
    return _getFighter_ftManager(this, entry, getFollower);
}

unsigned int FtManager::getFighterCount(EntryID entry) {
    return _getFighterCount_ftManager(this, entry);
}

AiInput* FtManager::getInput(EntryID entry) {
    return _getInput_ftManager(this, entry);
}

int FtManager::getEntryCount() {
    return _getEntryCount_ftManager(this);
}

void FtManager::setSlow(int excludeTeam, int unknown, int slowStrength, int durationInFrames) {
    return _setSlow_ftManager(this, excludeTeam, unknown, slowStrength, durationInFrames);
}

bool FtManager::isCpuActive(EntryID entry) {
    return _isCpuActive_ftManager(this, entry);
}