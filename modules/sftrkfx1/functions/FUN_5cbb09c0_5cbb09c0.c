/* Module: sftrkfx1.dll
   Function: FUN_5cbb09c0
   Address: 5cbb09c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cbb09c0(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar3 = (float10)1.4426950408889634 *
          (float10)(*(int *)(param_1 + 0x30) - *(int *)(param_3 + 0x10)) *
          (float10)*(double *)(param_3 + 0x18);
  fVar2 = ROUND(fVar3);
  fVar3 = (float10)f2xm1(fVar3 - fVar2);
  fscale((float10)1 + fVar3,fVar2);
  uVar1 = ftol();
  (**(code **)(*param_2 + 0x60))(param_2,uVar1);
  uVar1 = ftol();
  (**(code **)(*param_2 + 0x20))(param_2,uVar1);
  uVar1 = ftol();
  (**(code **)(*param_2 + 0x40))(param_2,uVar1);
  uVar1 = ftol();
  (**(code **)(*param_2 + 0xa0))(param_2,uVar1);
  (**(code **)(*param_2 + 0xc0))(param_2,*(undefined4 *)(param_1 + 0x44));
  (**(code **)(*param_2 + 0x80))(param_2,*(undefined4 *)(param_1 + 0x40));
  fVar3 = (float10)1.4426950408889634 *
          (float10)(*(int *)(param_1 + 0x50) - *(int *)(param_3 + 0x10)) *
          (float10)*(double *)(param_3 + 0x18);
  fVar2 = ROUND(fVar3);
  fVar3 = (float10)f2xm1(fVar3 - fVar2);
  fscale((float10)1 + fVar3,fVar2);
  uVar1 = ftol();
  (**(code **)(*param_2 + 0x68))(param_2,uVar1);
  uVar1 = ftol();
  (**(code **)(*param_2 + 0x28))(param_2,uVar1);
  uVar1 = ftol();
  (**(code **)(*param_2 + 0x48))(param_2,uVar1);
  uVar1 = ftol();
  (**(code **)(*param_2 + 0xa8))(param_2,uVar1);
  (**(code **)(*param_2 + 200))(param_2,*(undefined4 *)(param_1 + 100));
  (**(code **)(*param_2 + 0x88))(param_2,*(undefined4 *)(param_1 + 0x60));
  fVar3 = (float10)1.4426950408889634 *
          (float10)(*(int *)(param_1 + 0x70) - *(int *)(param_3 + 0x10)) *
          (float10)*(double *)(param_3 + 0x18);
  fVar2 = ROUND(fVar3);
  fVar3 = (float10)f2xm1(fVar3 - fVar2);
  fscale((float10)1 + fVar3,fVar2);
  uVar1 = ftol();
  (**(code **)(*param_2 + 0x70))(param_2,uVar1);
  uVar1 = ftol();
  (**(code **)(*param_2 + 0x30))(param_2,uVar1);
  uVar1 = ftol();
  (**(code **)(*param_2 + 0x50))(param_2,uVar1);
  uVar1 = ftol();
  (**(code **)(*param_2 + 0xb0))(param_2,uVar1);
  (**(code **)(*param_2 + 0xd0))(param_2,*(undefined4 *)(param_1 + 0x84));
  (**(code **)(*param_2 + 0x90))(param_2,*(undefined4 *)(param_1 + 0x80));
  fVar3 = (float10)1.4426950408889634 *
          (float10)(*(int *)(param_1 + 0x90) - *(int *)(param_3 + 0x10)) *
          (float10)*(double *)(param_3 + 0x18);
  fVar2 = ROUND(fVar3);
  fVar3 = (float10)f2xm1(fVar3 - fVar2);
  fscale((float10)1 + fVar3,fVar2);
  uVar1 = ftol();
  (**(code **)(*param_2 + 0x78))(param_2,uVar1);
  uVar1 = ftol();
  (**(code **)(*param_2 + 0x38))(param_2,uVar1);
  uVar1 = ftol();
  (**(code **)(*param_2 + 0x58))(param_2,uVar1);
  uVar1 = ftol();
  (**(code **)(*param_2 + 0xb8))(param_2,uVar1);
  (**(code **)(*param_2 + 0xd8))(param_2,*(undefined4 *)(param_1 + 0xa4));
  (**(code **)(*param_2 + 0x98))(param_2,*(undefined4 *)(param_1 + 0xa0));
  return;
}


