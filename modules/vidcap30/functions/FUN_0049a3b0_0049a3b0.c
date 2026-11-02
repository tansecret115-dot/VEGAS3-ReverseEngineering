/* Module: vidcap30.exe
   Function: FUN_0049a3b0
   Address: 0049a3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0049a3b0(int param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  LPCSTR pCVar5;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x18) + 0x20) + 8);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_58 = 0;
  local_48 = 0;
  local_54 = 0;
  local_44 = 0;
  local_50 = 0;
  local_40 = 0;
  local_1a = 0;
  local_5c = 0;
  local_5a = 0;
  local_4c = 0;
  local_4a = 0;
  local_3c = 0;
  local_3a = 0;
  local_38 = 0;
  local_2c = 0;
  local_2a = 0;
  local_28 = 0;
  local_34 = 0;
  local_24 = 0;
  local_1c = 8;
  local_30 = 0;
  local_20 = 0;
  switch(param_2) {
  case (char *)0x65:
    param_2 = "http://www.sonicfoundry.com/productinfo.asp?Place=News";
    break;
  case (char *)0x66:
    param_2 = "http://www.sonicfoundry.com/productinfo.asp?Place=FAQ";
    break;
  case (char *)0x67:
    param_2 = "http://www.sonicfoundry.com/productinfo.asp?Place=Support";
    break;
  case (char *)0x68:
    param_2 = "http://www.sonicfoundry.com/productinfo.asp?Place=Home";
    break;
  case (char *)0x69:
    param_2 = "http://www.sonicfoundry.com/productinfo.asp?Product=SoftEncode";
  }
  uVar4 = 0xffffffff;
  pCVar5 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pCVar5;
    pCVar5 = pCVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00579db0();
  MultiByteToWideChar(0,1,param_2,-1,(LPWSTR)&stack0xffffff98,~uVar4);
  uVar2 = Ordinal_2(&stack0xffffff98);
  local_14 = uVar2;
  iVar3 = (**(code **)*local_c)(local_c,&DAT_005a5b38,&local_8);
  if (-1 < iVar3) {
    iVar3 = (**(code **)(*local_8 + 0xd0))
                      (local_8,&local_1c,&local_5c,&local_4c,&local_3c,&local_2c);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  Ordinal_6(uVar2);
  return iVar3;
}


