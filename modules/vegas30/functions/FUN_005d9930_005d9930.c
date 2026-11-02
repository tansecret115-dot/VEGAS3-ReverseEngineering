/* Module: vegas30.exe
   Function: FUN_005d9930
   Address: 005d9930
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005d9930(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1;
  FUN_005b83b0(param_1,1);
  iVar2 = _SfList_AllocItem_12(puVar1[0x86],8,&param_1);
  if ((-1 < iVar2) && (param_1 != (undefined4 *)0x0)) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    iVar2 = _SfList_InsertList_16(puVar1[0x86],0xffffffff,0,0xffffffff);
  }
  FUN_005b84d0(puVar1,1);
  return iVar2;
}


