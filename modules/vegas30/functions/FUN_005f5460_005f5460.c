/* Module: vegas30.exe
   Function: FUN_005f5460
   Address: 005f5460
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005f5460(int param_1,LPCSTR param_2,LPCSTR param_3,uint param_4,int param_5)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x330) = 100000000;
  *(undefined4 *)(param_1 + 0x334) = 0;
  lstrcpynA((LPSTR)(param_1 + 0x10),param_2,0x104);
  *(undefined1 *)(param_1 + 0x113) = 0;
  *(uint *)(param_1 + 800) = param_4;
  *(int *)(param_1 + 0x324) = param_5;
  if ((param_4 == 0) && (param_5 == 0)) {
    uVar1 = FUN_005f5580();
    *(undefined8 *)(param_1 + 800) = uVar1;
  }
  else if ((DAT_00646e04 <= param_5) && ((DAT_00646e04 < param_5 || (DAT_00646e00 <= param_4)))) {
    DAT_00646e00 = param_4 + 1;
    DAT_00646e04 = param_5 + (uint)(0xfffffffe < param_4);
  }
  lstrcpynA((LPSTR)(param_1 + 0x114),param_3,0x104);
  *(undefined1 *)(param_1 + 0x217) = 0;
  return;
}


