/* Module: vegas30.exe
   Function: FUN_004403c0
   Address: 004403c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_004403c0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x2c);
  iVar2 = (**(code **)(*DAT_0064b144 + 0x1c8))
                    (DAT_0064b144,puVar1,0xffffffff,0x10000003,0,0,*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0xc),FUN_005895a0,param_1 + 0x18,&DAT_0064b15c,0,0);
  if (-1 < iVar2) {
    iVar2 = FUN_005fcf70(DAT_0064b138,param_1 + 0x18,0,0,*(undefined4 *)(param_1 + 8),
                         *(undefined4 *)(param_1 + 0xc),0xffffffff);
    if (iVar2 < 0) {
      (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
      *puVar1 = 0;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return iVar2;
}


