/* Module: vegas30.exe
   Function: FUN_004b12d0
   Address: 004b12d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_004b12d0(int param_1,int *param_2,uint param_3,int param_4,undefined4 param_5,undefined4 param_6
            )

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  piVar1 = (int *)(param_1 + 0xc);
  FUN_004b12a0(*(undefined4 *)(param_1 + 0xc));
  *piVar1 = 0;
  if (param_2 != (int *)0x0) {
    local_c = _SfList_CreateExZ_32(piVar1,4,0xffffffff,0xffffffff,&DAT_80000002,0,0,0);
    if (((-1 < local_c) && (local_4 = *param_2, local_4 != 0)) && (local_10 = 0, 0 < local_4)) {
      do {
        puVar2 = *(uint **)(param_2[2] + local_10 * 4);
        iVar6 = FUN_004b1430(puVar2,param_3,param_4,param_5,param_6);
        if (iVar6 != 0) {
          iVar6 = lstrlenA((LPCSTR)(puVar2 + 0xc));
          if (iVar6 != 0) {
            iVar6 = iVar6 + 1;
          }
          local_c = _SfList_AllocAndInsertItem_20(*piVar1,0,iVar6 * 2 + 0x1c,0xffffffff,&local_8);
          if ((-1 < local_c) &&
             (puVar3 = *(undefined4 **)(*(int *)(*piVar1 + 8) + local_8 * 4),
             puVar3 != (undefined4 *)0x0)) {
            *puVar3 = 0x1c;
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            puVar3[1] = uVar4 - param_3;
            puVar3[2] = (uVar5 - param_4) - (uint)(uVar4 < param_3);
            puVar3[3] = puVar2[2];
            puVar3[4] = puVar2[3];
            uVar4 = puVar2[8];
            puVar3[6] = iVar6 * 2;
            puVar3[5] = uVar4 & 1;
            if (iVar6 != 0) {
              MultiByteToWideChar(0,1,(LPCSTR)(puVar2 + 0xc),-1,(LPWSTR)(puVar3 + 7),iVar6);
              *(WCHAR *)((int)(puVar3 + 7) + (iVar6 + -1) * 2) = L'\0';
            }
          }
        }
        local_10 = local_10 + 1;
      } while (local_10 < local_4);
    }
    return local_c;
  }
  return 0;
}


