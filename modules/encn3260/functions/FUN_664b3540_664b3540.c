/* Module: encn3260.dll
   Function: FUN_664b3540
   Address: 664b3540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664b3540(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80004005;
  iVar1 = FUN_664b3620((int)param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_664b6200((uint *)((int)param_1 + 0x48),(uint *)((int)param_1 + 0xd40),0,
                         (uint *)((int)param_1 + 0x30),(uint *)((int)param_1 + 0x44));
    if (iVar1 == 0) {
      *(undefined4 *)((int)param_1 + 0x118c) = 0;
      *(undefined4 *)((int)param_1 + 0x1184) = 0x10000;
      *(undefined4 *)((int)param_1 + 0x1188) = 0x10000;
      *(undefined4 *)((int)param_1 + 0x1190) = 0;
      uVar2 = 0;
    }
  }
  if (*(int *)((int)param_1 + 0x11a4) != 0) {
    *(undefined4 *)((int)param_1 + 0x11a4) = 0;
    FUN_664b3df0(param_1);
  }
  return uVar2;
}


