/* Module: vidcap30.exe
   Function: FUN_0042c1c0
   Address: 0042c1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0042c1c0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_214 [127];
  undefined2 uStack_16;
  LPCSTR pCStack_c;
  
  local_214[0] = 0;
  piVar1 = (int *)*param_1;
  local_214[1] = 0;
  local_214[2] = 0;
  iVar2 = (**(code **)*piVar1)();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(local_214[0] + 0xc))(local_214,&stack0xfffffde4);
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)&stack0xfffffde6;
      for (iVar2 = 0x81; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      *(undefined2 *)puVar3 = 0;
      MultiByteToWideChar(0,1,pCStack_c,-1,(LPWSTR)&stack0xfffffde4,0x104);
      DAT_005ba4b4 = DAT_005ba4b4 | 0x2000;
      uStack_16 = 0;
      iVar2 = Ordinal_417(DAT_005ba4bc,0,0,&stack0xfffffde4,1,param_1,&DAT_005a5af8,local_214,0,0,0)
      ;
      DAT_005ba4b4 = DAT_005ba4b4 & 0xffffdfff;
      CoTaskMemFree(local_214);
    }
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return iVar2;
}


