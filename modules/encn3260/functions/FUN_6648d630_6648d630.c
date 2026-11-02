/* Module: encn3260.dll
   Function: FUN_6648d630
   Address: 6648d630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648d630(void *this,uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_6648dfd0(this,param_1);
  if (iVar1 == 0) {
    return 0x80004005;
  }
  uVar2 = FUN_664954c0(iVar1);
  return uVar2;
}


