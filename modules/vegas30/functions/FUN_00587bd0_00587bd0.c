/* Module: vegas30.exe
   Function: FUN_00587bd0
   Address: 00587bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_00587bd0(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_124;
  undefined1 local_120 [16];
  undefined1 auStack_110 [272];
  
  uVar3 = 0;
  local_124 = 0;
  if (*(uint *)(param_1 + 0xc) <= param_3) {
    param_3 = *(uint *)(param_1 + 0xc);
  }
  if (param_3 != 0) {
    do {
      piVar1 = (int *)FUN_005880e0(uVar3);
      if (piVar1 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 8))(local_120);
        if (-1 < iVar2) {
          iVar2 = FUN_00587b80(auStack_110);
          local_124 = local_124 + iVar2;
        }
        FUN_00588100(piVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  return local_124 == param_2;
}


