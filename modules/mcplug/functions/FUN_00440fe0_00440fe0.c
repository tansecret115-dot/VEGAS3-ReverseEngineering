/* Module: mcplug.dll
   Function: FUN_00440fe0
   Address: 00440fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00440fe0(undefined2 *param_1,double *param_2,uint param_3,float param_4)

{
  int iVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  
  if (param_3 != 0) {
    dVar3 = (double)(param_4 * (float)_DAT_0047f8a8);
    uVar4 = param_3 >> 1;
    if ((param_3 & 1) != 0) {
      iVar1 = (int)ROUND(*param_2 * dVar3);
      *param_1 = (short)iVar1;
      *(char *)(param_1 + 1) = (char)((uint)iVar1 >> 0x10);
      if (iVar1 < -0x800000) {
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 0x80;
      }
      else if (0x7ffffe < iVar1) {
        *param_1 = 0xffff;
        *(undefined1 *)(param_1 + 1) = 0x7f;
      }
      param_2 = param_2 + 1;
      param_1 = (undefined2 *)((int)param_1 + 3);
      if (uVar4 == 0) {
        return;
      }
    }
    do {
      iVar1 = (int)ROUND(*param_2 * dVar3);
      iVar2 = (int)ROUND(param_2[1] * dVar3);
      *param_1 = (short)iVar1;
      *(char *)(param_1 + 1) = (char)((uint)iVar1 >> 0x10);
      if (iVar1 < -0x800000) {
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 0x80;
      }
      else if (0x7ffffe < iVar1) {
        *param_1 = 0xffff;
        *(undefined1 *)(param_1 + 1) = 0x7f;
      }
      *(short *)((int)param_1 + 3) = (short)iVar2;
      *(char *)((int)param_1 + 5) = (char)((uint)iVar2 >> 0x10);
      if (iVar2 < -0x800000) {
        *(undefined2 *)((int)param_1 + 3) = 0;
        *(undefined1 *)((int)param_1 + 5) = 0x80;
      }
      else if (0x7ffffe < iVar2) {
        *(undefined2 *)((int)param_1 + 3) = 0xffff;
        *(undefined1 *)((int)param_1 + 5) = 0x7f;
      }
      param_1 = param_1 + 3;
      param_2 = param_2 + 2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}


