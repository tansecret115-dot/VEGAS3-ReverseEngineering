/* Module: vidcap30.exe
   Function: FUN_00427500
   Address: 00427500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00427500(int *param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,LPCSTR param_9)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  if (*param_1 == 8) {
    if ((param_1[0x53] & 0x40U) != 0) {
      param_1[0x52] = param_1[0x52];
      param_1[0x53] = param_1[0x53] | 0x400;
      param_1[0xe4] = param_4;
      param_1[0xe5] = param_5;
      param_1[0xe6] = param_6;
      param_1[0xe7] = param_7;
      param_1[0xe2] = param_2;
      param_1[0xe3] = param_3;
      param_1[0x216] = 0;
      if (param_9 == (LPCSTR)0x0) {
        *(undefined1 *)(param_1 + 0x217) = 0;
      }
      else {
        lstrcpynA((LPSTR)(param_1 + 0x217),param_9,0x104);
        *(undefined1 *)((int)param_1 + 0x95f) = 0;
      }
      if ((DAT_005bb804 != 0) && (param_8 != 0)) {
        param_1[0x216] = param_8;
        uVar1 = FUN_00427780(param_1,param_2,param_3);
        return uVar1;
      }
      uVar2 = ftol();
      iVar3 = param_2 - uVar2;
      param_3 = param_3 - (uint)(param_2 < uVar2);
      if ((param_3 < 1) && (param_3 < 0)) {
        iVar3 = 0;
        param_3 = 0;
      }
      uVar1 = FUN_00427780(param_1,iVar3,param_3);
    }
  }
  return uVar1;
}


