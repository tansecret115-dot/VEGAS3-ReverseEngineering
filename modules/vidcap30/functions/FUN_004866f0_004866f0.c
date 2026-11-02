/* Module: vidcap30.exe
   Function: FUN_004866f0
   Address: 004866f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004866f0(int param_1,uint param_2,int param_3,LPSTR param_4)

{
  int iVar1;
  uint uVar2;
  undefined **ppuVar3;
  
  if (param_1 == -1) {
    param_1 = DAT_005c16d4;
  }
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = (int)param_2 >> 0x1f;
  if (param_3 == 1) {
    iVar1 = (param_2 ^ uVar2) - uVar2;
    ppuVar3 = &PTR_DAT_00594bb4;
  }
  else if (param_3 == 3) {
    iVar1 = (param_2 ^ uVar2) - uVar2;
    ppuVar3 = &PTR_DAT_00594bb8;
  }
  else if (param_3 == 4) {
    iVar1 = (param_2 ^ uVar2) - uVar2;
    ppuVar3 = (undefined **)&DAT_00594bbc;
  }
  else {
    iVar1 = (param_2 ^ uVar2) - uVar2;
    ppuVar3 = &PTR_DAT_00594bc0;
  }
  wsprintfA(param_4,(LPCSTR)ppuVar3,iVar1);
  if (-1 < (int)param_2) {
    return *(undefined4 *)(param_1 + 0x20c);
  }
  return *(undefined4 *)(param_1 + 0x104);
}


