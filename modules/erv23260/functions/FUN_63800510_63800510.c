/* Module: erv23260.dll
   Function: FUN_63800510
   Address: 63800510
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_63800510(void *this,uint *param_1,uint *param_2,uint param_3,int param_4,undefined4 param_5,
            int param_6,int param_7)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = FUN_637fd250((int)this);
  FUN_637ff900(*(void **)((int)this + 0x94),*(int *)((int)this + 0x88),(char)iVar2);
  puVar1 = param_1;
  if (param_1 != (uint *)0x0) {
    param_1 = (uint *)CONCAT31(param_1._1_3_,*(undefined1 *)((int)this + 0xc));
    FUN_63802340(puVar1,param_2,param_3,(undefined4 *)((int)this + 4),(uint *)&param_1,param_4,
                 (char)param_5,param_6,param_7);
    *(uint *)((int)this + 0xc) = (uint)param_1 & 0xff;
  }
  return;
}


