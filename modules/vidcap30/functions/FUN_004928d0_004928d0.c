/* Module: vidcap30.exe
   Function: FUN_004928d0
   Address: 004928d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004928d0(char *param_1,int param_2,int param_3,int param_4,char param_5,char *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_8;
  uint local_4;
  
  cVar2 = param_5;
  local_14 = 0;
  local_4 = 0;
  pcVar5 = param_1;
  do {
    local_18 = local_4 + 0x60;
    local_8 = 0;
    do {
      uVar7 = 0;
      do {
        if ((*pcVar5 != -1) && (cVar2 != *pcVar5)) {
          iVar3 = local_18 + uVar7;
          local_28 = (uint)(iVar3 * param_2) / 0x60 + local_4;
          if (0x1f < local_28) {
            local_28 = 0x20;
          }
          local_2c = (uint)(iVar3 * param_3) / 0x60 + local_8;
          if (0x1f < local_2c) {
            local_2c = 0x20;
          }
          _param_5 = (uint)(iVar3 * param_4) / 0x60 + uVar7;
          if (0x1f < _param_5) {
            _param_5 = 0x20;
          }
          local_24 = local_4;
          local_20 = local_8;
          local_1c = uVar7;
          if (local_4 < local_28) {
            iVar3 = local_4 << 5;
            uVar1 = local_8;
            uVar6 = local_4;
            do {
              for (; uVar1 < local_2c; uVar1 = uVar1 + 1) {
                if (uVar7 < _param_5) {
                  pcVar4 = param_1 + (iVar3 + uVar1) * 0x20 + uVar7;
                  uVar8 = uVar7;
                  do {
                    if ((*pcVar4 != -1) && (cVar2 != *pcVar4)) {
                      *pcVar4 = cVar2;
                      if (local_24 < uVar6) {
                        local_24 = uVar6;
                      }
                      if (local_20 < uVar1) {
                        local_20 = uVar1;
                      }
                      if (local_1c < uVar8) {
                        local_1c = uVar8;
                      }
                    }
                    uVar8 = uVar8 + 1;
                    pcVar4 = pcVar4 + 1;
                  } while (uVar8 < _param_5);
                }
              }
              uVar6 = uVar6 + 1;
              iVar3 = iVar3 + 0x20;
              uVar1 = local_8;
            } while (uVar6 < local_28);
          }
          param_6[2] = (char)(local_24 + local_4 >> 1) << 3;
          param_6[3] = '\0';
          param_6[1] = (char)(local_20 + local_8 >> 1) << 3;
          *param_6 = (char)(local_1c + uVar7 >> 1) << 3;
          param_6 = param_6 + 4;
          local_14 = local_14 + 1;
        }
        uVar7 = uVar7 + 1;
        pcVar5 = pcVar5 + 1;
      } while (uVar7 < 0x20);
      local_8 = local_8 + 1;
      local_18 = local_18 + 1;
    } while (local_8 < 0x20);
    local_4 = local_4 + 1;
  } while (local_4 < 0x20);
  return local_14;
}


