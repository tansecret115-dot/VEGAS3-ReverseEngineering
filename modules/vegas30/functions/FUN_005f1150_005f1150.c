/* Module: vegas30.exe
   Function: FUN_005f1150
   Address: 005f1150
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005f1150(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_EBX;
  int iVar3;
  int *unaff_ESI;
  int *piStack_210;
  undefined4 uStack_20c;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  iVar3 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x14c);
  if (*(int *)(param_1 + 0x14c) == 0) {
    MultiByteToWideChar(0,1,(LPCSTR)(param_1 + 0x170),-1,local_208,0x104);
    local_2 = 0;
    iVar3 = (**(code **)(*DAT_0064b510 + 0x58))(DAT_0064b510,local_208,puVar1);
    if (iVar3 < 0) {
      return iVar3;
    }
    iVar2 = (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1,&stack0xfffffde4);
    if (-1 < iVar2) {
      uStack_20c = 0;
      iVar2 = (**(code **)(*piStack_210 + 0x24))(piStack_210,&uStack_20c);
      if (iVar2 < 0) {
        *(undefined4 *)(param_1 + 0x15c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x15c) = 1;
        (**(code **)(*unaff_EBX + 8))(unaff_EBX);
      }
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
  }
  *param_2 = *puVar1;
  (**(code **)(*(int *)*puVar1 + 4))((int *)*puVar1);
  return iVar3;
}


