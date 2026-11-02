/* Module: wmfdist2.exe
   Function: decode_block
   Address: 0100782f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* Library Function - Single Match
    _decode_block@16
   
   Library: Visual Studio 2005 Release
   __stdcall decode_block,16 */

uint decode_block(int *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if (param_2 == 2) {
    uVar1 = FUN_010085a9(param_1,param_3,param_4);
  }
  else if (param_2 == 1) {
    uVar1 = FUN_01008046(param_1,param_3,param_4);
  }
  else if (param_2 == 3) {
    uVar1 = FUN_01007d23(param_1,param_3,param_4);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


