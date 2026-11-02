/* Module: sftrkfx1.dll
   Function: FUN_5cbb8860
   Address: 5cbb8860
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5cbb8860(void *this,int param_1,uint param_2)

{
  undefined4 *puVar1;
  double dVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong local_18;
  
  puVar1 = *(undefined4 **)((int)this + 0xa4);
  *(undefined4 *)((int)this + 0xb8) = *puVar1;
  iVar4 = puVar1[1];
  *(int *)((int)this + 0xbc) = iVar4;
  puVar1[*(int *)((int)this + 0xb8) + 0x41] =
       puVar1[*(int *)((int)this + 0xb8) + 0x41] ^ puVar1[iVar4 + 0x41];
  iVar4 = *(int *)((int)this + 0xa4);
  local_18 = (ulonglong)*(uint *)(iVar4 + 0x104 + *(int *)((int)this + 0xb8) * 4);
  *(double *)((int)this + 0xd0) = (double)local_18 * *(double *)((int)this + 0x88);
  *(uint *)((int)this + 0xb8) = (uint)*(byte *)(*(int *)((int)this + 0xb8) + 8 + iVar4);
  iVar5 = *(int *)((int)this + 0x74);
  *(uint *)((int)this + 0xbc) = (uint)*(byte *)(iVar4 + 8 + *(int *)((int)this + 0xbc));
  if (iVar5 == 0) {
    *(undefined4 *)((int)this + 200) = *(undefined4 *)((int)this + 0xd0);
    *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)((int)this + 0xd4);
    *(undefined4 *)((int)this + 0x68) = 0;
    if (param_2 != 0) {
      do {
        *(double *)(param_1 + *(int *)((int)this + 0x68) * 8) =
             *(double *)(param_1 + *(int *)((int)this + 0x68) * 8) + *(double *)((int)this + 200);
        iVar4 = *(int *)((int)this + 0x68);
        *(double *)((int)this + 0x58) =
             *(double *)((int)this + 0x90) * *(double *)(param_1 + iVar4 * 8);
        iVar5 = ftol();
        *(double *)(param_1 + iVar4 * 8) = (double)iVar5;
        *(double *)(param_1 + *(int *)((int)this + 0x68) * 8) =
             *(double *)(param_1 + *(int *)((int)this + 0x68) * 8) * *(double *)((int)this + 0x98);
        *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + 1;
      } while (*(uint *)((int)this + 0x68) < param_2);
    }
  }
  else {
    if (iVar5 == 1) {
      *(undefined4 *)((int)this + 0x68) = 0;
      *(double *)((int)this + 200) = *(double *)((int)this + 0xd0) + *(double *)((int)this + 0xb0);
      if (param_2 != 0) {
        do {
          iVar4 = *(int *)((int)this + 0x68);
          dVar2 = *(double *)((int)this + 0x90) * *(double *)(param_1 + iVar4 * 8) -
                  *(double *)(iVar4 * 0x10 + *(int *)((int)this + 0xa8));
          *(double *)((int)this + 0xc0) = dVar2;
          *(double *)((int)this + 0x58) = dVar2 + *(double *)((int)this + 200);
          iVar5 = ftol();
          *(double *)(param_1 + iVar4 * 8) = (double)iVar5;
          *(double *)(*(int *)((int)this + 0x68) * 0x10 + *(int *)((int)this + 0xa8)) =
               *(double *)(param_1 + *(int *)((int)this + 0x68) * 8) - *(double *)((int)this + 0xc0)
          ;
          *(double *)(param_1 + *(int *)((int)this + 0x68) * 8) =
               *(double *)(param_1 + *(int *)((int)this + 0x68) * 8) * *(double *)((int)this + 0x98)
          ;
          uVar6 = *(int *)((int)this + 0x68) + 1;
          *(uint *)((int)this + 0x68) = uVar6;
        } while (uVar6 < param_2);
      }
    }
    else {
      if (iVar5 != 2) goto LAB_5cbb8b88;
      *(undefined4 *)((int)this + 0x68) = 0;
      *(double *)((int)this + 200) = *(double *)((int)this + 0xd0) + *(double *)((int)this + 0xb0);
      if (param_2 != 0) {
        do {
          pdVar3 = (double *)(*(int *)((int)this + 0x68) * 0x10 + *(int *)((int)this + 0xa8));
          dVar2 = (*(double *)(param_1 + *(int *)((int)this + 0x68) * 8) *
                   *(double *)((int)this + 0x90) - *pdVar3) + pdVar3[1];
          *(double *)((int)this + 0xc0) = dVar2;
          *(double *)((int)this + 0x58) = dVar2 + *(double *)((int)this + 200);
          pdVar3[1] = *pdVar3 * _DAT_5cc04b80;
          iVar4 = ftol();
          *(double *)(param_1 + *(int *)((int)this + 0x68) * 8) = (double)iVar4;
          *(double *)(*(int *)((int)this + 0x68) * 0x10 + *(int *)((int)this + 0xa8)) =
               *(double *)(param_1 + *(int *)((int)this + 0x68) * 8) - *(double *)((int)this + 0xc0)
          ;
          *(double *)(param_1 + *(int *)((int)this + 0x68) * 8) =
               *(double *)(param_1 + *(int *)((int)this + 0x68) * 8) * *(double *)((int)this + 0x98)
          ;
          uVar6 = *(int *)((int)this + 0x68) + 1;
          *(uint *)((int)this + 0x68) = uVar6;
        } while (uVar6 < param_2);
      }
    }
    dVar2 = *(double *)((int)this + 200) * _DAT_5cc04b78;
    *(double *)((int)this + 200) = dVar2;
    *(double *)((int)this + 0xb0) = dVar2;
  }
LAB_5cbb8b88:
  **(undefined4 **)((int)this + 0xa4) = *(undefined4 *)((int)this + 0xb8);
  *(undefined4 *)(*(int *)((int)this + 0xa4) + 4) = *(undefined4 *)((int)this + 0xbc);
  return;
}


