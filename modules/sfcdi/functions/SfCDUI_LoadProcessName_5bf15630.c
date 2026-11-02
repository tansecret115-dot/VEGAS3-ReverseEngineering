/* Module: sfcdi.dll
   Function: SfCDUI_LoadProcessName
   Address: 5bf15630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfCDUI_LoadProcessName(unsigned int,char *,unsigned int) */

int SfCDUI_LoadProcessName(uint param_1,char *param_2,uint param_3)

{
  uint uVar1;
  
                    /* 0x15630  48  ?SfCDUI_LoadProcessName@@YGHIPADI@Z */
  switch(param_1) {
  case 1:
    uVar1 = 0x106;
    break;
  case 2:
    uVar1 = 0x107;
    break;
  case 3:
    uVar1 = 0xfe;
    break;
  case 4:
    uVar1 = 0xff;
    break;
  default:
    return 0;
  case 6:
    uVar1 = 0x100;
    break;
  case 7:
    uVar1 = 0x102;
    break;
  case 8:
    uVar1 = 0x104;
    break;
  case 9:
    uVar1 = 0x105;
    break;
  case 10:
    uVar1 = 0x108;
    break;
  case 0xb:
    uVar1 = 0x10a;
    break;
  case 0xc:
    uVar1 = 0x109;
  }
  FUN_5bf27f10(DAT_5bf65fc4,uVar1,param_2,param_3);
  return 1;
}


