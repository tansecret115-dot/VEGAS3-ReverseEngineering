/* Module: vegas30k.dll
   Function: FUN_010882b0
   Address: 010882b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010882b0(tagVMGI_MAT *param_1)

{
  int *piVar1;
  uint uVar2;
  tagVMGI_MAT *ptVar3;
  tagVMGI_MAT tVar4;
  HGLOBAL pvVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint local_8;
  tagVMGI_MAT *local_4;
  
  local_8 = 0x400;
  pvVar5 = GlobalAlloc(0x42,0x400);
  local_4 = GlobalLock(pvVar5);
  if (local_4 == (tagVMGI_MAT *)0x0) {
    iVar6 = -0x7ff8fff2;
  }
  else {
    iVar6 = FUN_01088180(param_1,&local_4,&local_8);
    if (-1 < iVar6) {
      iVar6 = FUN_01088030(param_1,&local_4,&local_8);
      if (-1 < iVar6) {
        iVar6 = FUN_01087ad0(param_1,&local_4,&local_8);
        if (-1 < iVar6) {
          iVar6 = FUN_01087760(param_1,&local_4,&local_8);
          if (-1 < iVar6) {
            iVar6 = FUN_01087d30(param_1,&local_4,&local_8);
            if (-1 < iVar6) {
              iVar6 = FUN_01087620(param_1,&local_4,&local_8);
              if (-1 < iVar6) {
                iVar6 = FUN_010874e0(param_1,&local_4,&local_8);
                ptVar3 = local_4;
                if (-1 < iVar6) {
                  if (*(int *)(param_1 + 0xc) != 0) {
                    *(uint *)(local_4 + 0xc0) = (uint)((local_8 & 0x7ff) != 0) + (local_8 >> 0xb);
                  }
                  *(undefined2 *)(local_4 + 0x100) = *(undefined2 *)(param_1 + 0x3c);
                  if ((*(int **)(param_1 + 0x40) != (int *)0x0) && (**(int **)(param_1 + 0x40) != 0)
                     ) {
                    local_4[0x103] = (tagVMGI_MAT)0x1;
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
                    *(undefined4 *)(local_4 + 0x104) = *puVar7;
                    *(undefined4 *)(local_4 + 0x108) = puVar7[1];
                  }
                  if ((*(int **)(param_1 + 0x44) != (int *)0x0) && (**(int **)(param_1 + 0x44) != 0)
                     ) {
                    local_4[0x155] = (tagVMGI_MAT)0x1;
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
                    *(undefined4 *)(local_4 + 0x156) = *puVar7;
                    *(undefined2 *)(local_4 + 0x15a) = *(undefined2 *)(puVar7 + 1);
                  }
                  memmove(local_4,&DAT_011e2424,0xc);
                  if ((*(int *)(param_1 + 0xc) == 0) ||
                     (uVar2 = *(uint *)(*(int *)(param_1 + 0xc) + 8), uVar2 < 0x10)) {
                    *(uint *)(ptVar3 + 0xc) = ((local_8 & 0x7ff) != 0) + 0x1f + (local_8 >> 0xb);
                  }
                  else {
                    *(uint *)(ptVar3 + 0xc) =
                         (uVar2 - 1) + ((uint)((local_8 & 0x7ff) != 0) + (local_8 >> 0xb)) * 2;
                  }
                  *(uint *)(ptVar3 + 0x1c) = (((local_8 & 0x7ff) != 0) - 1) + (local_8 >> 0xb);
                  ptVar3[0x21] = *param_1;
                  ptVar3[0x23] = param_1[1];
                  *(undefined2 *)(ptVar3 + 0x26) = *(undefined2 *)(param_1 + 2);
                  *(undefined2 *)(ptVar3 + 0x28) = *(undefined2 *)(param_1 + 4);
                  ptVar3[0x2a] = param_1[6];
                  tVar4 = (tagVMGI_MAT)0x0;
                  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
                    tVar4 = SUB41(**(undefined4 **)(param_1 + 8),0);
                  }
                  ptVar3[0x3f] = tVar4;
                  SfCdiSwap_VMGI_MAT(ptVar3);
                  if (*(LPCVOID *)(param_1 + 0x14) != (LPCVOID)0x0) {
                    pvVar5 = GlobalHandle(*(LPCVOID *)(param_1 + 0x14));
                    GlobalUnlock(pvVar5);
                    pvVar5 = GlobalHandle(*(LPCVOID *)(param_1 + 0x14));
                    GlobalFree(pvVar5);
                  }
                  *(tagVMGI_MAT **)(param_1 + 0x14) = local_4;
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


