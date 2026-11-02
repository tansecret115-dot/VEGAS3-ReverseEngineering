/* Module: vegas30k.dll
   Function: _SfLang_AddStringTable@16
   Address: 010c55b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * _SfLang_AddStringTable_16(int param_1,LPVOID param_2,int param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  HGLOBAL hMem;
  int iVar5;
  LPVOID local_14;
  LPVOID local_10;
  int local_c;
  uint local_8;
  int local_4;
  
                    /* 0xc55b0  1042  _SfLang_AddStringTable@16 */
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x140);
    if ((*(int *)(param_1 + 0x140) != 0) ||
       (puVar3 = (undefined1 *)
                 _SfList_CreateExZ_32(piVar1,0x14,0xffffffff,0xffffffff,0x80000004,0,0,0),
       -1 < (int)puVar3)) {
      piVar2 = (int *)*piVar1;
      iVar5 = 0;
      if (0 < *piVar2) {
        do {
          iVar4 = piVar2[1] * iVar5 + piVar2[2];
          if (((*(uint *)(iVar4 + 0xc) <= param_4) && (param_4 < *(uint *)(iVar4 + 0x10))) ||
             ((*(uint *)(iVar4 + 0xc) <= param_3 + param_4 &&
              (param_3 + param_4 < *(uint *)(iVar4 + 0x10))))) goto LAB_010c55bf;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *piVar2);
      }
      local_4 = param_3 + param_4;
      local_c = param_3;
      local_8 = param_4;
      local_14 = param_2;
      if (*(int *)(param_1 + 0x138) != 0) {
        hMem = GlobalAlloc(0x40,param_3 * 4);
        param_2 = GlobalLock(hMem);
      }
      if (param_2 == (LPVOID)0x0) {
        return (undefined1 *)0x8007000e;
      }
      local_10 = param_2;
      puVar3 = (undefined1 *)_SfList_InsertList_16(*piVar1,0xffffffff,&local_14,1);
    }
    return puVar3;
  }
LAB_010c55bf:
  return &DAT_80070057;
}


