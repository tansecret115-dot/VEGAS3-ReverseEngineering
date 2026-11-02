/* Module: encn3260.dll
   Function: FUN_664b6890
   Address: 664b6890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b6890(byte *param_1,undefined4 *param_2,int *param_3)

{
  HDC hdc;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  uint local_d0c [539];
  int local_4a0;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*param_1 & 1) == 0) {
    if (*(int *)(param_1 + 0x85c) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x85c) + 0x10);
    }
    if (iVar4 == 0) {
      puVar5 = local_d0c;
      for (iVar4 = 0x33e; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      FUN_664b5070(local_d0c,*(uint *)(param_1 + 4),1,(LPCSTR)0x0);
      FUN_664b5860((int)param_1);
      if (local_4a0 == 0) {
        hdc = GetDC((HWND)0x0);
        local_14 = GetDeviceCaps(hdc,8);
        local_10 = GetDeviceCaps(hdc,10);
        iVar4 = GetDeviceCaps(hdc,0xe);
        iVar1 = GetDeviceCaps(hdc,0xc);
        piVar2 = operator_new(0x10);
        *piVar2 = local_14;
        piVar2[1] = local_10;
        piVar2[2] = iVar4 * iVar1;
        piVar2[3] = 0;
        FUN_664baab0(*(void **)(param_1 + 0x85c),piVar2);
        ReleaseDC((HWND)0x0,hdc);
      }
      else {
        FUN_664b4c70(&DAT_664f10f0,*(void **)(param_1 + 0x85c));
      }
      FUN_664b58d0(local_d0c);
    }
  }
  local_8 = *(int *)(param_1 + 0x85c);
  if (local_8 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_8 + 0x10);
  }
  if (*param_3 != iVar4) {
    if (local_8 != 0) {
      *param_3 = *(int *)(local_8 + 0x10);
      return 0;
    }
    *param_3 = 0;
    return 0;
  }
  local_c = *(int *)(local_8 + 4);
  if (local_c != 0) {
    if (local_c != 0) goto LAB_664b69da;
    puVar3 = (undefined4 *)0x0;
    while( true ) {
      *param_2 = *puVar3;
      param_2[1] = puVar3[1];
      param_2[2] = puVar3[2];
      param_2[3] = puVar3[3];
      param_2 = param_2 + 4;
      FUN_664bab40(&local_c);
      if (local_c == 0) break;
LAB_664b69da:
      puVar3 = (undefined4 *)FUN_664bab80(local_c);
      puVar3 = (undefined4 *)*puVar3;
    }
  }
  return 0;
}


