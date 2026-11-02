/* Module: rmto3260.dll
   Function: FUN_662d5480
   Address: 662d5480
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_662d5480(void *this,char *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  FILE *pFVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  long *plVar10;
  int local_20 [4];
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x24) = 0;
  pFVar4 = fopen(param_1,&DAT_6630abf8);
  *(FILE **)((int)this + 4) = pFVar4;
  if (pFVar4 == (FILE *)0x0) {
    local_8 = -0x7ffbff7e;
  }
  if (-1 < local_8) {
    pcVar5 = FUN_662d57f0((int)this);
    iVar6 = FUN_662d5a90(pcVar5,s_DURATION_6630abec);
    if (iVar6 != 0) {
      pcVar5 = FUN_662d57f0((int)this);
      iVar6 = FUN_662d5a90(pcVar5,&DAT_6630abe8);
      if (iVar6 != 0) {
        pcVar5 = FUN_662d57f0((int)this);
        lVar7 = atol(pcVar5);
        param_1 = (char *)0x1;
        pcVar5 = FUN_662d57f0((int)this);
        iVar6 = FUN_662d5a90(pcVar5,&DAT_6630ab5c);
        if (iVar6 != 0) {
          plVar10 = local_20;
          do {
            if (4 < (int)param_1) break;
            pcVar5 = FUN_662d57f0((int)this);
            lVar8 = atol(pcVar5);
            param_1 = param_1 + 1;
            *plVar10 = lVar8;
            plVar10 = plVar10 + 1;
            pcVar5 = FUN_662d57f0((int)this);
            iVar6 = FUN_662d5a90(pcVar5,&DAT_6630ab5c);
          } while (iVar6 != 0);
        }
        if (param_1 == (char *)0x5) {
          *(char **)((int)this + 0x20) = pcVar5;
          local_c = 1;
          local_10 = local_20[3] +
                     (local_20[2] + (local_20[1] + (local_20[0] + lVar7 * 0x18) * 0x3c) * 0x3c) *
                     1000;
          *param_2 = local_10;
        }
      }
    }
  }
  if (local_c == 0) {
    return -0x7ffbfc30;
  }
  if (-1 < local_8) {
    pvVar9 = operator_new(0x3a);
    *(void **)((int)this + 8) = pvVar9;
    if (pvVar9 == (void *)0x0) {
      local_8 = -0x7ff8fff2;
    }
    if (-1 < local_8) {
      **(undefined4 **)((int)this + 8) = 0x4d445052;
      *(undefined2 *)(*(int *)((int)this + 8) + 8) = 0;
      *(undefined2 *)(*(int *)((int)this + 8) + 10) = 0;
      *(undefined4 *)(*(int *)((int)this + 8) + 0xc) = param_3;
      *(undefined4 *)(*(int *)((int)this + 8) + 0x10) = param_3;
      *(undefined4 *)(*(int *)((int)this + 8) + 0x14) = *(undefined4 *)((int)this + 0x10);
      *(undefined4 *)(*(int *)((int)this + 8) + 0x18) = *(undefined4 *)((int)this + 0x14);
      *(undefined4 *)(*(int *)((int)this + 8) + 0x1c) = 0;
      *(undefined4 *)(*(int *)((int)this + 8) + 0x20) = param_4;
      *(int *)(*(int *)((int)this + 8) + 0x24) = local_10;
      iVar6 = -1;
      *(undefined1 *)(*(int *)((int)this + 8) + 0x28) = 0;
      *(undefined4 *)(*(int *)((int)this + 8) + 0x29) = 0;
      bVar2 = *(byte *)(*(int *)((int)this + 8) + 0x28);
      pcVar5 = s_application_x_pn_imagemap_6630a0fc;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      *(byte *)(*(int *)((int)this + 8) + 0x2d) = ~(byte)iVar6 - 1;
      *(char **)(*(int *)((int)this + 8) + 0x2e) = s_application_x_pn_imagemap_6630a0fc;
      bVar3 = *(byte *)(*(int *)((int)this + 8) + 0x2d);
      *(undefined4 *)(*(int *)((int)this + 8) + 0x32) = 0;
      *(undefined4 *)(*(int *)((int)this + 8) + 0x36) = 0;
      *(uint *)(*(int *)((int)this + 8) + 4) =
           (uint)bVar2 + (uint)bVar3 + *(int *)(*(int *)((int)this + 8) + 0x32) + 0x2e;
    }
  }
  iVar6 = local_8;
  if (local_8 < 0) {
    if (*(FILE **)((int)this + 4) != (FILE *)0x0) {
      fclose(*(FILE **)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
    if (*(void **)((int)this + 8) != (void *)0x0) {
      operator_delete(*(void **)((int)this + 8));
      *(undefined4 *)((int)this + 8) = 0;
    }
    if (*(void **)((int)this + 0xc) != (void *)0x0) {
      operator_delete(*(void **)((int)this + 0xc));
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return iVar6;
}


