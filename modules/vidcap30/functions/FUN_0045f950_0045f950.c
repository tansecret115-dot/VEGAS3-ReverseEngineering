/* Module: vidcap30.exe
   Function: FUN_0045f950
   Address: 0045f950
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0045f950(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int unaff_EDI;
  int *piVar2;
  int local_20 [8];
  
  piVar2 = local_20;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  local_20[0] = 0x20;
  if ((LPCSTR)param_1[3] == (LPCSTR)0x0) {
    local_20[1] = 0;
  }
  else {
    iVar1 = lstrlenA((LPCSTR)param_1[3]);
    local_20[1] = iVar1 * 2 + 2;
  }
  local_20[2] = param_1[2];
  local_20[6] = *param_1;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,local_20,0x20,0);
  if ((-1 < iVar1) && (unaff_EDI != 0)) {
    FUN_00451fa0(param_2,param_1[3],unaff_EDI);
  }
  return;
}


