/* Module: erv23260.dll
   Function: FUN_637f5c70
   Address: 637f5c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637f5c70(void *this,int param_1,undefined *param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  uint *puVar4;
  
  if ((param_1 != 0) || (param_2 != (undefined *)0x0)) {
    puVar4 = (uint *)FUN_637f5dc0(this,&param_1,param_1,(int)param_2);
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    param_2 = *(undefined **)(*(int *)((int)this + 0x10) + ((uVar2 & 1) << 1 | uVar1 & 1) * 4);
    (*(code *)param_2)(*(undefined4 *)((int)this + 0x1c));
    (*(code *)param_2)(*(undefined4 *)((int)this + 0x1c));
    (*(code *)param_2)(*(undefined4 *)((int)this + 0x1c));
    (*(code *)param_2)(*(undefined4 *)((int)this + 0x1c));
    pcVar3 = *(code **)(*(int *)((int)this + 0x10) +
                       (((int)(char)(&DAT_638291b0)[uVar2 & 3] + ((int)uVar2 >> 1) & 1U) << 1 |
                       (int)(char)(&DAT_638291b0)[uVar1 & 3] + ((int)uVar1 >> 1) & 1U) * 4);
    (*pcVar3)(*(undefined4 *)((int)this + 0x1c));
    (*pcVar3)(*(undefined4 *)((int)this + 0x1c));
  }
  return;
}


