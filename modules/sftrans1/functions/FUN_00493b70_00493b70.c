/* Module: sftrans1.dll
   Function: FUN_00493b70
   Address: 00493b70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00493b70(HWND param_1,HWND param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  HWND pHVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  CHAR local_18 [12];
  CHAR local_c [12];
  
  uVar3 = param_4;
  uVar2 = param_3;
  pHVar1 = param_1;
  if (param_1 != (HWND)0x0) {
    param_1 = (HWND)0x0;
    FUN_00493c20(param_3,param_4,&param_1,param_5,param_6,param_7,param_8,param_9,param_10);
    SendMessageA(pHVar1,0x610,1,(LPARAM)param_1);
  }
  pHVar1 = param_2;
  if (param_2 != (HWND)0x0) {
    FUN_004d6250(local_18,uVar2,uVar3,3,0);
    SendMessageA(pHVar1,0xd,10,(LPARAM)local_c);
    iVar4 = lstrcmpA(local_c,local_18);
    if (iVar4 != 0) {
      SendMessageA(pHVar1,0xc,0,(LPARAM)local_18);
    }
  }
  return;
}


