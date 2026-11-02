/* Module: vegas30k.dll
   Function: FUN_0104d430
   Address: 0104d430
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0104d430(char *param_1,int param_2,int param_3,int param_4,char param_5)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_4;
  
  cVar1 = param_5;
  local_10 = 0;
  local_4 = 0;
  pcVar3 = param_1;
  do {
    local_14 = local_4 + 0x60;
    _param_5 = 0;
    do {
      uVar7 = 0;
      do {
        if ((*pcVar3 != -1) && (cVar1 != *pcVar3)) {
          iVar4 = local_14 + uVar7;
          uVar5 = (uint)(iVar4 * param_2) / 0x60 + local_4;
          if (0x1f < uVar5) {
            uVar5 = 0x20;
          }
          local_18 = _param_5 + (uint)(iVar4 * param_3) / 0x60;
          if (0x1f < local_18) {
            local_18 = 0x20;
          }
          local_1c = (uint)(iVar4 * param_4) / 0x60 + uVar7;
          if (0x1f < local_1c) {
            local_1c = 0x20;
          }
          if (local_4 < uVar5) {
            iVar4 = local_4 << 5;
            local_c = uVar5 - local_4;
            uVar5 = _param_5;
            do {
              for (; uVar5 < local_18; uVar5 = uVar5 + 1) {
                if (uVar7 < local_1c) {
                  pcVar2 = param_1 + (iVar4 + uVar5) * 0x20 + uVar7;
                  iVar6 = local_1c - uVar7;
                  do {
                    if ((*pcVar2 != -1) && (cVar1 != *pcVar2)) {
                      *pcVar2 = cVar1;
                    }
                    pcVar2 = pcVar2 + 1;
                    iVar6 = iVar6 + -1;
                  } while (iVar6 != 0);
                }
              }
              iVar4 = iVar4 + 0x20;
              local_c = local_c + -1;
              uVar5 = _param_5;
            } while (local_c != 0);
          }
          local_10 = local_10 + 1;
        }
        uVar7 = uVar7 + 1;
        pcVar3 = pcVar3 + 1;
      } while (uVar7 < 0x20);
      _param_5 = _param_5 + 1;
      local_14 = local_14 + 1;
    } while (_param_5 < 0x20);
    local_4 = local_4 + 1;
  } while (local_4 < 0x20);
  return local_10;
}


