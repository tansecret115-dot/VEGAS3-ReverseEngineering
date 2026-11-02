/* Module: encn3260.dll
   Function: FUN_66496440
   Address: 66496440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_66496440(void *this,uint *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  *param_4 = *(undefined4 *)((int)this + 0x36);
  puVar3 = *(undefined4 **)((int)this + 10);
  if ((((puVar3 != (undefined4 *)0x0) && (puVar3[3] != 0)) && (*(short *)((int)this + 0x78) == 0))
     && (*(int *)((int)this + 0x2a) == 0)) {
    puVar3 = (undefined4 *)FUN_664c04d0(puVar3);
    piVar1 = (int *)*puVar3;
    puVar3 = (undefined4 *)FUN_664c04e0(*(undefined4 **)((int)this + 10));
    piVar2 = (int *)*puVar3;
    uVar4 = (**(code **)(*piVar1 + 0x1c))(piVar1);
    uVar5 = (**(code **)(*piVar2 + 0x1c))(piVar2);
    *param_1 = uVar4;
    param_1[1] = 0;
    if ((uVar5 < uVar4) && (0x2fffffff < uVar4 - uVar5)) {
      *param_2 = uVar5 - 1;
      param_2[1] = (uint)(uVar5 != 0);
      *param_3 = *(undefined4 *)((int)this + 0x1ea);
      return 0;
    }
    *param_2 = uVar5;
    param_2[1] = 0;
    *param_3 = *(undefined4 *)((int)this + 0x1ea);
  }
  return 0;
}


