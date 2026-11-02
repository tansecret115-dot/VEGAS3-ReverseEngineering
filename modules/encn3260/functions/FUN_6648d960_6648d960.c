/* Module: encn3260.dll
   Function: FUN_6648d960
   Address: 6648d960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648d960(void *this,ushort *param_1,undefined4 *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  
  puVar3 = param_3;
  puVar2 = param_1;
  if (*(int *)((int)this + 0x2c) == 0) {
    *param_1 = 1;
    *param_2 = 0;
    *param_3 = 0;
    return 0;
  }
  *param_1 = 4;
  *param_2 = 0;
  *param_3 = 100;
  iVar4 = FUN_6648d1b0(*(int *)((int)this + 0x2c));
  do {
    if (iVar4 == 0) {
      return 0;
    }
    FUN_664954e0(*(void **)(iVar4 + 0x16),(undefined2 *)((int)&param_2 + 2),
                 (undefined2 *)((int)&param_1 + 2));
    uVar1 = *puVar2;
    if (param_2._2_2_ < uVar1) {
      *puVar2 = param_2._2_2_;
LAB_6648d9e4:
      *puVar3 = param_1._2_2_;
    }
    else if ((param_2._2_2_ == uVar1) && (param_1._2_2_ < *puVar3)) goto LAB_6648d9e4;
    iVar4 = FUN_6648d220(*(int *)((int)this + 0x2c));
  } while( true );
}


