/* Module: encn3260.dll
   Function: FUN_6649d8d0
   Address: 6649d8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6649d8d0(UINT_PTR *param_1)

{
  DWORD DVar1;
  UINT_PTR UVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  UVar2 = param_1[3];
  *(byte *)(param_1 + 3) = (byte)UVar2 & 0xfd;
  if (((byte)UVar2 & 1) == 0) {
    DVar1 = GetTickCount();
    *(DWORD *)((int)param_1 + 0x15) = DVar1;
    UVar2 = SetTimer((HWND)0x0,0,param_1[2],FUN_6649d9f0);
    *param_1 = UVar2;
    if ((param_1[3] & 4) != 0) {
      UVar2 = SetTimer((HWND)0x0,0,param_1[2],FUN_6649d9f0);
      param_1[1] = UVar2;
    }
    puVar3 = operator_new(8);
    if (puVar3 == (undefined4 *)0x0) {
      if ((param_1[3] & 4) == 0) {
        KillTimer((HWND)0x0,*param_1);
        return 0x8007000e;
      }
      if (*param_1 != 0) {
        KillTimer((HWND)0x0,*param_1);
      }
      if (param_1[1] != 0) {
        KillTimer((HWND)0x0,param_1[1]);
      }
      return 0x8007000e;
    }
    *puVar3 = param_1;
    puVar3[1] = *param_1;
    puVar4 = FUN_664bbe00(&DAT_664f0618,*param_1);
    *puVar4 = puVar3;
    if ((param_1[3] & 4) != 0) {
      puVar4 = FUN_664bbe00(&DAT_664f0618,param_1[1]);
      *puVar4 = puVar3;
    }
    *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
  }
  return 0;
}


