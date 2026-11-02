/* Module: vidcap30.exe
   Function: FUN_004058b0
   Address: 004058b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004058b0(int param_1,int *param_2)

{
  int iVar1;
  int *unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14 [2];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00417990(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  local_14[0] = 0xf;
  local_10 = 0;
  local_c = 1;
  local_8 = 0xffffffff;
  local_4 = 1;
  local_20 = 1;
  local_1c = 0;
  local_18 = 0;
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,local_14,&local_20);
  if (-1 < iVar1) {
    if ((unaff_EDI == 1) && (unaff_ESI != 0)) {
      iVar1 = FUN_00405330((undefined4 *)(param_1 + 0x10),unaff_ESI);
    }
    if (unaff_EBX != (int *)0x0) {
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    ReleaseStgMedium((LPSTGMEDIUM)&stack0xffffffd4);
  }
  return iVar1;
}


