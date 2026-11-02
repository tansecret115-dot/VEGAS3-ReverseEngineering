/* Module: vidcap30.exe
   Function: FUN_00420b20
   Address: 00420b20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00420b20(int *param_1,IID *param_2,LPVOID *param_3,LPCSTR param_4)

{
  HRESULT HVar1;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  HVar1 = CoCreateInstance(param_2,(LPUNKNOWN)0x0,1,(IID *)&DAT_005a1ca8,param_3);
  if (-1 < HVar1) {
    MultiByteToWideChar(0,1,param_4,-1,local_208,0x104);
    local_2 = 0;
    (**(code **)(*param_1 + 0xc))(param_1,*param_3,local_208);
  }
  return;
}


