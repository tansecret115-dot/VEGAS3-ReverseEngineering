/* Module: sfppack2.dll
   Function: FUN_5ccf3ef0
   Address: 5ccf3ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5ccf3ef0(void *this,undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  if (((*param_2 == 0) && (*(int *)((int)this + 0x210) == 0)) && (*(int *)((int)this + 0x214) == 0))
  {
    *param_4 = 0;
    return 1;
  }
  do {
    if (*(int *)((int)this + 0x210) == 1) {
      (**(code **)((int)this + 0x48c))(param_3,param_4);
      if (*(int *)((int)this + 0x21c) != *(int *)(*(int *)((int)this + 0x208) + 0x14))
      goto LAB_5ccf3fea;
      *(undefined4 *)((int)this + 0x21c) = 0;
      *(undefined4 *)((int)this + 0x214) = 0;
      *(undefined4 *)((int)this + 0x210) = 0;
      if (*(int *)((int)this + 0x130) != 0) {
        *param_4 = *(undefined4 *)((int)this + 0x220);
        *(undefined4 *)(*(int *)((int)this + 0x208) + 0x14) = *(undefined4 *)((int)this + 0x224);
        return 1;
      }
    }
    (**(code **)((int)this + 0x488))(param_1,param_2);
    iVar1 = *(int *)(*(int *)((int)this + 0x208) + 0x14);
    if (*(int *)((int)this + 0x214) != iVar1) {
      if (*(int *)((int)this + 0x130) == 0) {
LAB_5ccf3fea:
        *param_2 = *(int *)((int)this + 0x218);
        *param_4 = *(undefined4 *)((int)this + 0x220);
        return 0;
      }
      *(int *)((int)this + 0x224) = iVar1;
      *(int *)(*(int *)((int)this + 0x208) + 0x14) = *(int *)((int)this + 0x214);
    }
    (**(code **)((int)this + 0x494))();
    *(undefined4 *)((int)this + 0x210) = 1;
  } while( true );
}


