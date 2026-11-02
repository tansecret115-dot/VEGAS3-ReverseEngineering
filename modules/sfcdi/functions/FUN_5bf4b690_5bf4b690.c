/* Module: sfcdi.dll
   Function: FUN_5bf4b690
   Address: 5bf4b690
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf4b690(undefined1 *param_1)

{
  int *piVar1;
  uint uVar2;
  LPVOID pvVar3;
  undefined1 uVar4;
  HGLOBAL pvVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint local_8;
  LPVOID local_4;
  
  local_8 = 0x400;
  pvVar5 = GlobalAlloc(0x42,0x400);
  local_4 = GlobalLock(pvVar5);
  if (local_4 == (LPVOID)0x0) {
    iVar6 = -0x7ff8fff2;
  }
  else {
    iVar6 = FUN_5bf4b560((uint)param_1,&local_4,&local_8);
    if (-1 < iVar6) {
      iVar6 = FUN_5bf4b410((int)param_1,&local_4,&local_8);
      if (-1 < iVar6) {
        iVar6 = FUN_5bf4aeb0((int)param_1,&local_4,&local_8);
        if (-1 < iVar6) {
          iVar6 = FUN_5bf4ab40((int)param_1,&local_4,&local_8);
          if (-1 < iVar6) {
            iVar6 = FUN_5bf4b110((int)param_1,&local_4,&local_8);
            if (-1 < iVar6) {
              iVar6 = FUN_5bf4aa00((int)param_1,&local_4,&local_8);
              if (-1 < iVar6) {
                iVar6 = FUN_5bf4a8c0((int)param_1,&local_4,&local_8);
                pvVar3 = local_4;
                if (-1 < iVar6) {
                  if (*(int *)(param_1 + 0xc) != 0) {
                    *(uint *)((int)local_4 + 0xc0) =
                         (uint)((local_8 & 0x7ff) != 0) + (local_8 >> 0xb);
                  }
                  *(undefined2 *)((int)local_4 + 0x100) = *(undefined2 *)(param_1 + 0x3c);
                  if ((*(int **)(param_1 + 0x40) != (int *)0x0) && (**(int **)(param_1 + 0x40) != 0)
                     ) {
                    *(undefined1 *)((int)local_4 + 0x103) = 1;
                    piVar1 = *(int **)(param_1 + 0x40);
                    if (piVar1 == (int *)0x0) {
                      iVar8 = 0;
                    }
                    else {
                      iVar8 = *piVar1;
                    }
                    if (iVar8 + -1 < 0) {
                      puVar7 = (undefined4 *)0x0;
                    }
                    else {
                      puVar7 = *(undefined4 **)piVar1[2];
                    }
                    *(undefined4 *)((int)local_4 + 0x104) = *puVar7;
                    *(undefined4 *)((int)local_4 + 0x108) = puVar7[1];
                  }
                  if ((*(int **)(param_1 + 0x44) != (int *)0x0) && (**(int **)(param_1 + 0x44) != 0)
                     ) {
                    *(undefined1 *)((int)local_4 + 0x155) = 1;
                    piVar1 = *(int **)(param_1 + 0x44);
                    if (piVar1 == (int *)0x0) {
                      iVar8 = 0;
                    }
                    else {
                      iVar8 = *piVar1;
                    }
                    if (iVar8 + -1 < 0) {
                      puVar7 = (undefined4 *)0x0;
                    }
                    else {
                      puVar7 = *(undefined4 **)piVar1[2];
                    }
                    *(undefined4 *)((int)local_4 + 0x156) = *puVar7;
                    *(undefined2 *)((int)local_4 + 0x15a) = *(undefined2 *)(puVar7 + 1);
                  }
                  memmove(local_4,"DVDVIDEO-VMG",0xc);
                  if ((*(int *)(param_1 + 0xc) == 0) ||
                     (uVar2 = *(uint *)(*(int *)(param_1 + 0xc) + 8), uVar2 < 0x10)) {
                    *(uint *)((int)pvVar3 + 0xc) =
                         ((local_8 & 0x7ff) != 0) + 0x1f + (local_8 >> 0xb);
                  }
                  else {
                    *(uint *)((int)pvVar3 + 0xc) =
                         (uVar2 - 1) + ((uint)((local_8 & 0x7ff) != 0) + (local_8 >> 0xb)) * 2;
                  }
                  *(uint *)((int)pvVar3 + 0x1c) = (((local_8 & 0x7ff) != 0) - 1) + (local_8 >> 0xb);
                  *(undefined1 *)((int)pvVar3 + 0x21) = *param_1;
                  *(undefined1 *)((int)pvVar3 + 0x23) = param_1[1];
                  *(undefined2 *)((int)pvVar3 + 0x26) = *(undefined2 *)(param_1 + 2);
                  *(undefined2 *)((int)pvVar3 + 0x28) = *(undefined2 *)(param_1 + 4);
                  *(undefined1 *)((int)pvVar3 + 0x2a) = param_1[6];
                  uVar4 = 0;
                  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
                    uVar4 = (undefined1)**(undefined4 **)(param_1 + 8);
                  }
                  *(undefined1 *)((int)pvVar3 + 0x3f) = uVar4;
                  FUN_5bf4a4b0((int)pvVar3);
                  if (*(LPCVOID *)(param_1 + 0x14) != (LPCVOID)0x0) {
                    pvVar5 = GlobalHandle(*(LPCVOID *)(param_1 + 0x14));
                    GlobalUnlock(pvVar5);
                    pvVar5 = GlobalHandle(*(LPCVOID *)(param_1 + 0x14));
                    GlobalFree(pvVar5);
                  }
                  *(LPVOID *)(param_1 + 0x14) = local_4;
                  *(uint *)(param_1 + 0x18) = local_8;
                  return iVar6;
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar6;
}


