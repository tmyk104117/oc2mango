
#import <Foundation/Foundation.h>

static NSString * jsonEncryptString = @"{\"ORNode\": {\"m\": {\"withSemicolon\": \"0\"}, \"n\": \"0\", \"f\": [\"withSemicolon\"]}, \"ORTypeSpecial\": {\"m\": {\"type\": \"0\", \"name\": \"1\"}, \"n\": \"1\", \"f\": [\"type\", \"name\"]}, \"ORVariable\": {\"m\": {\"isBlock\": \"0\", \"ptCount\": \"1\", \"varname\": \"2\"}, \"n\": \"2\", \"f\": [\"isBlock\", \"ptCount\", \"varname\"]}, \"ORTypeVarPair\": {\"m\": {\"type\": \"0\", \"var\": \"1\"}, \"n\": \"3\", \"f\": [\"type\", \"var\"]}, \"ORFuncVariable\": {\"m\": {\"isMultiArgs\": \"0\", \"pairs\": \"1\", \"isBlock\": \"2\", \"ptCount\": \"3\", \"varname\": \"4\"}, \"n\": \"4\", \"f\": [\"isMultiArgs\", \"pairs\", \"isBlock\", \"ptCount\", \"varname\"]}, \"ORCArrayVariable\": {\"m\": {\"capacity\": \"0\", \"isBlock\": \"1\", \"ptCount\": \"2\", \"varname\": \"3\"}, \"n\": \"5\", \"f\": [\"capacity\", \"isBlock\", \"ptCount\", \"varname\"]}, \"ORFuncDeclare\": {\"m\": {\"returnType\": \"1\", \"funVar\": \"2\"}, \"n\": \"6\", \"f\": [\"returnType\", \"funVar\"]}, \"ORScopeImp\": {\"m\": {\"statements\": \"0\"}, \"n\": \"7\", \"f\": [\"statements\"]}, \"ORValueExpression\": {\"m\": {\"value_type\": \"0\", \"value\": \"1\"}, \"n\": \"8\", \"f\": [\"value_type\", \"value\"]}, \"ORIntegerValue\": {\"m\": {\"value\": \"0\"}, \"n\": \"9\", \"f\": [\"value\"]}, \"ORUIntegerValue\": {\"m\": {\"value\": \"0\"}, \"n\": \"10\", \"f\": [\"value\"]}, \"ORDoubleValue\": {\"m\": {\"value\": \"0\"}, \"n\": \"11\", \"f\": [\"value\"]}, \"ORBoolValue\": {\"m\": {\"value\": \"0\"}, \"n\": \"12\", \"f\": [\"value\"]}, \"ORMethodCall\": {\"m\": {\"methodOperator\": \"0\", \"isAssignedValue\": \"1\", \"caller\": \"2\", \"names\": \"3\", \"values\": \"4\"}, \"n\": \"13\", \"f\": [\"methodOperator\", \"isAssignedValue\", \"caller\", \"names\", \"values\"]}, \"ORCFuncCall\": {\"m\": {\"caller\": \"0\", \"expressions\": \"1\"}, \"n\": \"14\", \"f\": [\"caller\", \"expressions\"]}, \"ORFunctionImp\": {\"m\": {\"declare\": \"0\", \"scopeImp\": \"1\"}, \"n\": \"15\", \"f\": [\"declare\", \"scopeImp\"]}, \"ORSubscriptExpression\": {\"m\": {\"caller\": \"0\", \"keyExp\": \"1\"}, \"n\": \"16\", \"f\": [\"caller\", \"keyExp\"]}, \"ORAssignExpression\": {\"m\": {\"assignType\": \"0\", \"value\": \"1\", \"expression\": \"2\"}, \"n\": \"17\", \"f\": [\"assignType\", \"value\", \"expression\"]}, \"ORDeclareExpression\": {\"m\": {\"modifier\": \"0\", \"pair\": \"1\", \"expression\": \"2\"}, \"n\": \"18\", \"f\": [\"modifier\", \"pair\", \"expression\"]}, \"ORUnaryExpression\": {\"m\": {\"operatorType\": \"0\", \"value\": \"1\"}, \"n\": \"19\", \"f\": [\"operatorType\", \"value\"]}, \"ORBinaryExpression\": {\"m\": {\"operatorType\": \"0\", \"left\": \"1\", \"right\": \"2\"}, \"n\": \"20\", \"f\": [\"operatorType\", \"left\", \"right\"]}, \"ORTernaryExpression\": {\"m\": {\"expression\": \"0\", \"values\": \"1\"}, \"n\": \"21\", \"f\": [\"expression\", \"values\"]}, \"ORIfStatement\": {\"m\": {\"condition\": \"0\", \"last\": \"1\", \"scopeImp\": \"2\"}, \"n\": \"22\", \"f\": [\"condition\", \"last\", \"scopeImp\"]}, \"ORWhileStatement\": {\"m\": {\"condition\": \"0\", \"scopeImp\": \"1\"}, \"n\": \"23\", \"f\": [\"condition\", \"scopeImp\"]}, \"ORDoWhileStatement\": {\"m\": {\"condition\": \"0\", \"scopeImp\": \"1\"}, \"n\": \"24\", \"f\": [\"condition\", \"scopeImp\"]}, \"ORCaseStatement\": {\"m\": {\"value\": \"0\", \"scopeImp\": \"1\"}, \"n\": \"25\", \"f\": [\"value\", \"scopeImp\"]}, \"ORSwitchStatement\": {\"m\": {\"value\": \"0\", \"cases\": \"1\", \"scopeImp\": \"2\"}, \"n\": \"26\", \"f\": [\"value\", \"cases\", \"scopeImp\"]}, \"ORForStatement\": {\"m\": {\"varExpressions\": \"0\", \"condition\": \"1\", \"expressions\": \"2\", \"scopeImp\": \"3\"}, \"n\": \"27\", \"f\": [\"varExpressions\", \"condition\", \"expressions\", \"scopeImp\"]}, \"ORForInStatement\": {\"m\": {\"expression\": \"0\", \"value\": \"1\", \"scopeImp\": \"2\"}, \"n\": \"28\", \"f\": [\"expression\", \"value\", \"scopeImp\"]}, \"ORReturnStatement\": {\"m\": {\"expression\": \"0\"}, \"n\": \"29\", \"f\": [\"expression\"]}, \"ORBreakStatement\": {\"m\": {}, \"n\": \"30\", \"f\": []}, \"ORContinueStatement\": {\"m\": {}, \"n\": \"31\", \"f\": []}, \"ORPropertyDeclare\": {\"m\": {\"keywords\": \"1\", \"var\": \"2\"}, \"n\": \"32\", \"f\": [\"keywords\", \"var\"]}, \"ORMethodDeclare\": {\"m\": {\"isClassMethod\": \"0\", \"returnType\": \"1\", \"methodNames\": \"2\", \"parameterTypes\": \"3\", \"parameterNames\": \"4\"}, \"n\": \"33\", \"f\": [\"isClassMethod\", \"returnType\", \"methodNames\", \"parameterTypes\", \"parameterNames\"]}, \"ORMethodImplementation\": {\"m\": {\"declare\": \"0\", \"scopeImp\": \"1\"}, \"n\": \"34\", \"f\": [\"declare\", \"scopeImp\"]}, \"ORClass\": {\"m\": {\"className\": \"0\", \"superClassName\": \"1\", \"protocols\": \"2\", \"properties\": \"3\", \"privateVariables\": \"4\", \"methods\": \"5\"}, \"n\": \"35\", \"f\": [\"className\", \"superClassName\", \"protocols\", \"properties\", \"privateVariables\", \"methods\"]}, \"ORProtocol\": {\"m\": {\"protcolName\": \"0\", \"protocols\": \"1\", \"properties\": \"2\", \"methods\": \"3\"}, \"n\": \"36\", \"f\": [\"protcolName\", \"protocols\", \"properties\", \"methods\"]}, \"ORStructExpressoin\": {\"m\": {\"sturctName\": \"0\", \"fields\": \"1\"}, \"n\": \"37\", \"f\": [\"sturctName\", \"fields\"]}, \"ORUnionExpressoin\": {\"m\": {\"unionName\": \"0\", \"fields\": \"1\"}, \"n\": \"38\", \"f\": [\"unionName\", \"fields\"]}, \"OREnumExpressoin\": {\"m\": {\"valueType\": \"0\", \"enumName\": \"1\", \"fields\": \"2\"}, \"n\": \"39\", \"f\": [\"valueType\", \"enumName\", \"fields\"]}, \"ORTypedefExpressoin\": {\"m\": {\"expression\": \"0\", \"typeNewName\": \"1\"}, \"n\": \"40\", \"f\": [\"expression\", \"typeNewName\"]}}";
static NSString * jsonDecryptString = @"{\"0\": {\"m\": {\"0\": \"withSemicolon\"}, \"c\": \"ORNode\", \"f\": [\"0\"]}, \"1\": {\"m\": {\"0\": \"type\", \"1\": \"name\"}, \"c\": \"ORTypeSpecial\", \"f\": [\"0\", \"1\"]}, \"2\": {\"m\": {\"0\": \"isBlock\", \"1\": \"ptCount\", \"2\": \"varname\"}, \"c\": \"ORVariable\", \"f\": [\"0\", \"1\", \"2\"]}, \"3\": {\"m\": {\"0\": \"type\", \"1\": \"var\"}, \"c\": \"ORTypeVarPair\", \"f\": [\"0\", \"1\"]}, \"4\": {\"m\": {\"0\": \"isMultiArgs\", \"1\": \"pairs\", \"2\": \"isBlock\", \"3\": \"ptCount\", \"4\": \"varname\"}, \"c\": \"ORFuncVariable\", \"f\": [\"0\", \"1\", \"2\", \"3\", \"4\"]}, \"5\": {\"m\": {\"0\": \"capacity\", \"1\": \"isBlock\", \"2\": \"ptCount\", \"3\": \"varname\"}, \"c\": \"ORCArrayVariable\", \"f\": [\"0\", \"1\", \"2\", \"3\"]}, \"6\": {\"m\": {\"1\": \"returnType\", \"2\": \"funVar\"}, \"c\": \"ORFuncDeclare\", \"f\": [\"1\", \"2\"]}, \"7\": {\"m\": {\"0\": \"statements\"}, \"c\": \"ORScopeImp\", \"f\": [\"0\"]}, \"8\": {\"m\": {\"0\": \"value_type\", \"1\": \"value\"}, \"c\": \"ORValueExpression\", \"f\": [\"0\", \"1\"]}, \"9\": {\"m\": {\"0\": \"value\"}, \"c\": \"ORIntegerValue\", \"f\": [\"0\"]}, \"10\": {\"m\": {\"0\": \"value\"}, \"c\": \"ORUIntegerValue\", \"f\": [\"0\"]}, \"11\": {\"m\": {\"0\": \"value\"}, \"c\": \"ORDoubleValue\", \"f\": [\"0\"]}, \"12\": {\"m\": {\"0\": \"value\"}, \"c\": \"ORBoolValue\", \"f\": [\"0\"]}, \"13\": {\"m\": {\"0\": \"methodOperator\", \"1\": \"isAssignedValue\", \"2\": \"caller\", \"3\": \"names\", \"4\": \"values\"}, \"c\": \"ORMethodCall\", \"f\": [\"0\", \"1\", \"2\", \"3\", \"4\"]}, \"14\": {\"m\": {\"0\": \"caller\", \"1\": \"expressions\"}, \"c\": \"ORCFuncCall\", \"f\": [\"0\", \"1\"]}, \"15\": {\"m\": {\"0\": \"declare\", \"1\": \"scopeImp\"}, \"c\": \"ORFunctionImp\", \"f\": [\"0\", \"1\"]}, \"16\": {\"m\": {\"0\": \"caller\", \"1\": \"keyExp\"}, \"c\": \"ORSubscriptExpression\", \"f\": [\"0\", \"1\"]}, \"17\": {\"m\": {\"0\": \"assignType\", \"1\": \"value\", \"2\": \"expression\"}, \"c\": \"ORAssignExpression\", \"f\": [\"0\", \"1\", \"2\"]}, \"18\": {\"m\": {\"0\": \"modifier\", \"1\": \"pair\", \"2\": \"expression\"}, \"c\": \"ORDeclareExpression\", \"f\": [\"0\", \"1\", \"2\"]}, \"19\": {\"m\": {\"0\": \"operatorType\", \"1\": \"value\"}, \"c\": \"ORUnaryExpression\", \"f\": [\"0\", \"1\"]}, \"20\": {\"m\": {\"0\": \"operatorType\", \"1\": \"left\", \"2\": \"right\"}, \"c\": \"ORBinaryExpression\", \"f\": [\"0\", \"1\", \"2\"]}, \"21\": {\"m\": {\"0\": \"expression\", \"1\": \"values\"}, \"c\": \"ORTernaryExpression\", \"f\": [\"0\", \"1\"]}, \"22\": {\"m\": {\"0\": \"condition\", \"1\": \"last\", \"2\": \"scopeImp\"}, \"c\": \"ORIfStatement\", \"f\": [\"0\", \"1\", \"2\"]}, \"23\": {\"m\": {\"0\": \"condition\", \"1\": \"scopeImp\"}, \"c\": \"ORWhileStatement\", \"f\": [\"0\", \"1\"]}, \"24\": {\"m\": {\"0\": \"condition\", \"1\": \"scopeImp\"}, \"c\": \"ORDoWhileStatement\", \"f\": [\"0\", \"1\"]}, \"25\": {\"m\": {\"0\": \"value\", \"1\": \"scopeImp\"}, \"c\": \"ORCaseStatement\", \"f\": [\"0\", \"1\"]}, \"26\": {\"m\": {\"0\": \"value\", \"1\": \"cases\", \"2\": \"scopeImp\"}, \"c\": \"ORSwitchStatement\", \"f\": [\"0\", \"1\", \"2\"]}, \"27\": {\"m\": {\"0\": \"varExpressions\", \"1\": \"condition\", \"2\": \"expressions\", \"3\": \"scopeImp\"}, \"c\": \"ORForStatement\", \"f\": [\"0\", \"1\", \"2\", \"3\"]}, \"28\": {\"m\": {\"0\": \"expression\", \"1\": \"value\", \"2\": \"scopeImp\"}, \"c\": \"ORForInStatement\", \"f\": [\"0\", \"1\", \"2\"]}, \"29\": {\"m\": {\"0\": \"expression\"}, \"c\": \"ORReturnStatement\", \"f\": [\"0\"]}, \"30\": {\"m\": {}, \"c\": \"ORBreakStatement\", \"f\": []}, \"31\": {\"m\": {}, \"c\": \"ORContinueStatement\", \"f\": []}, \"32\": {\"m\": {\"1\": \"keywords\", \"2\": \"var\"}, \"c\": \"ORPropertyDeclare\", \"f\": [\"1\", \"2\"]}, \"33\": {\"m\": {\"0\": \"isClassMethod\", \"1\": \"returnType\", \"2\": \"methodNames\", \"3\": \"parameterTypes\", \"4\": \"parameterNames\"}, \"c\": \"ORMethodDeclare\", \"f\": [\"0\", \"1\", \"2\", \"3\", \"4\"]}, \"34\": {\"m\": {\"0\": \"declare\", \"1\": \"scopeImp\"}, \"c\": \"ORMethodImplementation\", \"f\": [\"0\", \"1\"]}, \"35\": {\"m\": {\"0\": \"className\", \"1\": \"superClassName\", \"2\": \"protocols\", \"3\": \"properties\", \"4\": \"privateVariables\", \"5\": \"methods\"}, \"c\": \"ORClass\", \"f\": [\"0\", \"1\", \"2\", \"3\", \"4\", \"5\"]}, \"36\": {\"m\": {\"0\": \"protcolName\", \"1\": \"protocols\", \"2\": \"properties\", \"3\": \"methods\"}, \"c\": \"ORProtocol\", \"f\": [\"0\", \"1\", \"2\", \"3\"]}, \"37\": {\"m\": {\"0\": \"sturctName\", \"1\": \"fields\"}, \"c\": \"ORStructExpressoin\", \"f\": [\"0\", \"1\"]}, \"38\": {\"m\": {\"0\": \"unionName\", \"1\": \"fields\"}, \"c\": \"ORUnionExpressoin\", \"f\": [\"0\", \"1\"]}, \"39\": {\"m\": {\"0\": \"valueType\", \"1\": \"enumName\", \"2\": \"fields\"}, \"c\": \"OREnumExpressoin\", \"f\": [\"0\", \"1\", \"2\"]}, \"40\": {\"m\": {\"0\": \"expression\", \"1\": \"typeNewName\"}, \"c\": \"ORTypedefExpressoin\", \"f\": [\"0\", \"1\"]}}";