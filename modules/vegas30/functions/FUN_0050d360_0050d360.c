/* Module: vegas30.exe
   Function: FUN_0050d360
   Address: 0050d360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050d360(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*param_1 == 0) {
    iVar2 = _SfList_CreateExZ_32(param_1,8,0xffffffff,0xffffffff,0x40000004,0,0,0);
    if (iVar2 < 0) {
      return 0xffffffff;
    }
  }
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  _SfList_InsertList_16(puVar1,uVar3,param_2,1);
  return uVar3;
}


