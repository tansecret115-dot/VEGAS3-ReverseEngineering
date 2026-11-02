/* Module: sfppack3.dll
   Function: FUN_5cc3fde0
   Address: 5cc3fde0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cc3fde0(void *this,int *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  double local_10;
  
  iVar1 = *param_1;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(int *)((int)this + 0x48) = iVar1;
  switch(*param_1) {
  default:
    fVar2 = (float10)local_10;
    *(undefined4 *)((int)this + 0x78) = 1;
    break;
  case 1:
    fVar2 = (float10)_DAT_5cc889b0;
    *(undefined4 *)((int)this + 0x50) = 0x47ae147b;
    *(undefined4 *)((int)this + 0x54) = 0x3ffc7ae1;
    break;
  case 2:
    fVar2 = (float10)_DAT_5cc889d8;
    *(undefined4 *)((int)this + 0x50) = 0;
    *(undefined4 *)((int)this + 0x54) = 0x40040000;
    break;
  case 3:
    fVar2 = (float10)_DAT_5cc889b8;
    *(undefined4 *)((int)this + 0x50) = 0xcccccccd;
    *(undefined4 *)((int)this + 0x54) = 0x4008cccc;
    break;
  case 4:
    fVar2 = (float10)_DAT_5cc889c0;
    *(undefined4 *)((int)this + 0x50) = 0;
    *(undefined4 *)((int)this + 0x54) = 0x40100000;
    break;
  case 5:
    fVar2 = (float10)_DAT_5cc889c8;
    *(undefined4 *)((int)this + 0x50) = 0x66666666;
    *(undefined4 *)((int)this + 0x54) = 0x40166666;
    break;
  case -5:
    fVar2 = (float10)_DAT_5cc87d20;
    break;
  case -4:
    fVar2 = (float10)_DAT_5cc889e8;
    break;
  case -3:
    fVar2 = (float10)_DAT_5cc889e0;
    break;
  case -2:
    fVar2 = (float10)_DAT_5cc889d8;
    break;
  case -1:
    fVar2 = (float10)_DAT_5cc889d0;
  }
  fVar3 = (float10)1.4426950408889634 * fVar2 * (float10)_DAT_5cc889a8;
  fVar2 = ROUND(fVar3);
  fVar3 = (float10)f2xm1(fVar3 - fVar2);
  fVar2 = (float10)fscale((float10)1 + fVar3,fVar2);
  if (*param_1 < 0) {
    *(double *)((int)this + 0x58) = (double)fVar2;
    *(double *)((int)this + 0x60) = (double)((float10)_DAT_5cc87d18 - fVar2);
  }
  else {
    *(double *)((int)this + 0x60) = (double)((float10)_DAT_5cc87d18 - fVar2);
    *(double *)((int)this + 0x58) = (double)(fVar2 * (float10)_DAT_5cc87d58);
  }
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  return 0;
}


