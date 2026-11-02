/* Module: rmto3260.dll
   Function: FUN_662d7320
   Address: 662d7320
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_662d7320(void *this,char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  FILE *pFVar4;
  void *pvVar5;
  int iVar6;
  char *pcVar7;
  int local_8;
  
  iVar6 = 0;
  local_8 = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x22) = 0;
  pFVar4 = fopen(param_1,&DAT_6630abf8);
  *(FILE **)((int)this + 4) = pFVar4;
  if (pFVar4 == (FILE *)0x0) {
    local_8 = -0x7ffbff7e;
    iVar6 = -0x7ffbff7e;
  }
  if (-1 < iVar6) {
    pvVar5 = operator_new(0x3a);
    *(void **)((int)this + 8) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      local_8 = -0x7ff8fff2;
      iVar6 = -0x7ff8fff2;
    }
    if (-1 < iVar6) {
      **(undefined4 **)((int)this + 8) = 0x4d445052;
      *(undefined2 *)(*(int *)((int)this + 8) + 8) = 0;
      *(undefined2 *)(*(int *)((int)this + 8) + 10) = 0;
      *(undefined4 *)(*(int *)((int)this + 8) + 0xc) = param_3;
      *(undefined4 *)(*(int *)((int)this + 8) + 0x10) = param_3;
      *(undefined4 *)(*(int *)((int)this + 8) + 0x14) = *(undefined4 *)((int)this + 0x14);
      *(undefined4 *)(*(int *)((int)this + 8) + 0x18) = *(undefined4 *)((int)this + 0x18);
      *(undefined4 *)(*(int *)((int)this + 8) + 0x1c) = 0;
      *(undefined4 *)(*(int *)((int)this + 8) + 0x20) = param_4;
      *(undefined4 *)(*(int *)((int)this + 8) + 0x24) = param_2;
      *(undefined1 *)(*(int *)((int)this + 8) + 0x28) = 0;
      *(undefined4 *)(*(int *)((int)this + 8) + 0x29) = 0;
      iVar6 = -1;
      bVar2 = *(byte *)(*(int *)((int)this + 8) + 0x28);
      pcVar7 = s_application_x_pn_realevent_6630a0bc;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      *(byte *)(*(int *)((int)this + 8) + 0x2d) = ~(byte)iVar6 - 1;
      *(char **)(*(int *)((int)this + 8) + 0x2e) = s_application_x_pn_realevent_6630a0bc;
      bVar3 = *(byte *)(*(int *)((int)this + 8) + 0x2d);
      *(undefined4 *)(*(int *)((int)this + 8) + 0x32) = 0;
      *(undefined4 *)(*(int *)((int)this + 8) + 0x36) = 0;
      *(uint *)(*(int *)((int)this + 8) + 4) =
           (uint)bVar2 + (uint)bVar3 + *(int *)(*(int *)((int)this + 8) + 0x32) + 0x2e;
      iVar6 = local_8;
      if (-1 < local_8) {
        return local_8;
      }
    }
  }
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
  return iVar6;
}


