/* Module: vegas30.exe
   Function: FUN_004b14d0
   Address: 004b14d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_004b14d0(int param_1,int *param_2,uint param_3,int param_4,undefined4 param_5,undefined4 param_6
            )

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int cchWideChar;
  int local_32c;
  int local_324;
  LPWSTR local_320;
  int local_318;
  int local_314;
  int local_310;
  CHAR local_30c [260];
  CHAR local_208 [520];
  
  piVar1 = (int *)(param_1 + 0x14);
  FUN_004b12a0(*(undefined4 *)(param_1 + 0x14));
  *piVar1 = 0;
  if (param_2 != (int *)0x0) {
    local_32c = _SfList_CreateExZ_32(piVar1,4,0xffffffff,0xffffffff,&DAT_80000002,0,0,0);
    if (((-1 < local_32c) && (local_314 = *param_2, local_314 != 0)) &&
       (local_324 = 0, 0 < local_314)) {
      do {
        puVar2 = *(uint **)(param_2[2] + local_324 * 4);
        iVar6 = FUN_004b1430(puVar2,param_3,param_4,param_5,param_6);
        if (iVar6 != 0) {
          FUN_004baf80(local_30c,0x104,local_208,0x208,puVar2[9]);
          iVar6 = lstrlenA(local_30c);
          if (iVar6 != 0) {
            iVar6 = iVar6 + 1;
          }
          cchWideChar = lstrlenA(local_208);
          if (cchWideChar != 0) {
            cchWideChar = cchWideChar + 1;
          }
          local_310 = cchWideChar * 2;
          local_32c = _SfList_AllocAndInsertItem_20
                                (*piVar1,0,local_310 + 0x1c + iVar6 * 2,0xffffffff,&local_318);
          if ((-1 < local_32c) &&
             (puVar3 = *(undefined4 **)(*(int *)(*piVar1 + 8) + local_318 * 4),
             puVar3 != (undefined4 *)0x0)) {
            *puVar3 = 0x1c;
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            puVar3[1] = uVar4 - param_3;
            puVar3[2] = (uVar5 - param_4) - (uint)(uVar4 < param_3);
            puVar3[3] = puVar2[2];
            puVar3[4] = puVar2[3];
            if (iVar6 != 0) {
              local_320 = (LPWSTR)(puVar3 + 7);
              MultiByteToWideChar(0,1,local_30c,-1,local_320,iVar6);
              local_320[iVar6 + -1] = L'\0';
              puVar3[5] = iVar6 * 2;
            }
            if (cchWideChar != 0) {
              local_320 = local_320 + iVar6;
              MultiByteToWideChar(0,1,local_208,-1,local_320,cchWideChar);
              *(undefined2 *)(local_310 + -2 + (int)local_320) = 0;
              puVar3[6] = local_310;
            }
          }
        }
        local_324 = local_324 + 1;
      } while (local_324 < local_314);
    }
    return local_32c;
  }
  return 0;
}


