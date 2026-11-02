/* Module: vidcap30.exe
   Function: FUN_00429e50
   Address: 00429e50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00429e50(int param_1)

{
  int iVar1;
  int *unaff_EBX;
  int *unaff_ESI;
  int *unaff_EDI;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_10 = (int *)0x0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_14 = (int *)0x0;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0x18))
                    (*(int **)(param_1 + 0x350),L"Smart Tee",&local_1c);
  if (iVar1 < 0) goto LAB_00429faf;
  iVar1 = FUN_00420930(param_1,0,unaff_EDI,&DAT_005a35a8,0,&stack0xffffffdc,&local_1c);
  if (iVar1 < 0) goto LAB_00429faf;
  iVar1 = FUN_00420930(param_1,0,unaff_EDI,&DAT_005a35a8,1,&local_18,&local_14);
  if (iVar1 < 0) goto LAB_00429faf;
  iVar1 = FUN_00425e50(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_00425e50(param_1);
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x3f4) != 0)) goto LAB_00429f01;
  }
  else {
LAB_00429f01:
    iVar1 = FUN_00420930(param_1,"DV Splitter",0,&DAT_005a35a8,0,&local_10,&stack0xffffffe0);
    if (iVar1 < 0) goto LAB_00429faf;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0x10))(*(int **)(param_1 + 0x350),unaff_EDI);
  if (-1 < iVar1) {
    if (unaff_EBX != (int *)0x0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0x2c))
                        (*(int **)(param_1 + 0x350),unaff_ESI,unaff_EBX);
    }
    if (-1 < iVar1) {
      *(int **)(param_1 + 0x824) = unaff_EDI;
      *(int **)(param_1 + 0x828) = unaff_ESI;
      *(int **)(param_1 + 0x82c) = local_1c;
      *(int **)(param_1 + 0x830) = local_18;
      *(int **)(param_1 + 0x834) = local_14;
      *(int **)(param_1 + 0x838) = local_10;
      *(int **)(param_1 + 0x83c) = unaff_EBX;
      return iVar1;
    }
  }
LAB_00429faf:
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))(local_1c);
  }
  local_1c = (int *)0x0;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))(local_18);
  }
  local_18 = (int *)0x0;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
  }
  local_14 = (int *)0x0;
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
  }
  local_10 = (int *)0x0;
  if (unaff_EBX != (int *)0x0) {
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
  }
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  return iVar1;
}


