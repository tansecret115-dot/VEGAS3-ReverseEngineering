/* Module: vidcap30.exe
   Function: FUN_004216b0
   Address: 004216b0
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_004216b0(int *param_1)

{
  LPVOID *ppv;
  HRESULT HVar1;
  
  HVar1 = 0;
  if (*param_1 == 7) {
    ppv = (LPVOID *)(param_1 + 0xd4);
    HVar1 = CoCreateInstance((IID *)&DAT_005a30b8,(LPUNKNOWN)0x0,1,(IID *)&DAT_005a1b38,ppv);
    if (-1 < HVar1) {
      (*(code *)**(undefined4 **)*ppv)(*ppv,&DAT_005a2278,param_1 + 0xd6);
      (*(code *)**(undefined4 **)*ppv)(*ppv,&DAT_005a2258,param_1 + 0xd5);
      (*(code *)**(undefined4 **)*ppv)(*ppv,&DAT_005a2228,param_1 + 0xd7);
      (*(code *)**(undefined4 **)*ppv)(*ppv,&DAT_005a1c08,param_1 + 200);
    }
  }
  return HVar1;
}


