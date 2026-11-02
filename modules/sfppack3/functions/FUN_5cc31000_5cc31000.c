/* Module: sfppack3.dll
   Function: FUN_5cc31000
   Address: 5cc31000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

void FUN_5cc31000(undefined4 *param_1,undefined4 *param_2,uchar *param_3)

{
  undefined4 *puVar1;
  HGLOBAL pvVar2;
  LPVOID this;
  undefined4 *this_00;
  int iVar3;
  int local_38 [14];
  
  puVar1 = param_1;
  *param_1 = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0x1217da2;
  local_38[0xc] = 0x58efc213;
  local_38[0xd] = 0xcb327912;
  local_38[1] = 0x1b362ab;
  local_38[2] = 0xaec1edfb;
  local_38[3] = 0x4462bc6e;
  local_38[4] = 0x30af8a;
  local_38[5] = 0x807105fc;
  local_38[6] = 0xc415fd5;
  pvVar2 = GlobalAlloc(0x40,0xc08);
  this = GlobalLock(pvVar2);
  if (this == (LPVOID)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_5cc78b20(this,0xf0,(HKEY__)0xa0,(uchar *)"ACID\\3.0",local_38 + 7,
                           (int)(local_38 + 1),1,1,0,2,0,param_3,(uchar *)0x0);
  }
  FUN_5cc7bd10(this_00,0x40,1);
  iVar3 = FUN_5cc7bb20(this_00,local_38,(int *)&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0xe6;
    return;
  }
  if (this_00 != (undefined4 *)0x0) {
    FUN_5cc78d30(this_00);
    pvVar2 = GlobalHandle(this_00);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(this_00);
    GlobalFree(pvVar2);
  }
  return;
}


