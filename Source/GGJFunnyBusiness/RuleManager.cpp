
#include "RuleManager.h"

ARuleManager::ARuleManager()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ARuleManager::BeginPlay()
{
	Super::BeginPlay();

	GenerateHats();
	GenerateClothes();
	GenerateFace();
	GenerateJokes();
	GenerateCurrentLegalElements();
}

void ARuleManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARuleManager::GenerateHats()
{

	ClownHats.Push("Top hat");
	ClownHats.Push("Jester hat");
	ClownHats.Push("Bowler hat");
	ClownHats.Push("Cowboy hat");
	ClownHats.Push("Paper hat");
	ClownHats.Push("Banana hat");
	ClownHats.Push("Afro hair");
	ClownHats.Push("Judge hair");
	ClownHats.Push("PigTails hair");
	ClownHats.Push("Police hat");

}

void ARuleManager::GenerateClothes()
{
	ClownClothes.Push("Jester suit");
	ClownClothes.Push("Superhero suit");
	ClownClothes.Push("Wife beater");
	ClownClothes.Push("Police uniform");
	ClownClothes.Push("Joker Costume");
	ClownClothes.Push("Raincoat");
	ClownClothes.Push("Prison Uniform");
	ClownClothes.Push("Regular sweater");
	ClownClothes.Push("GGJ t-shirt");
}

void ARuleManager::GenerateFace()
{
	ClownFaces.Push("Red nose");
	ClownFaces.Push("Blue nose");
	ClownFaces.Push("Child Art");
	ClownFaces.Push("Nose Pincher");
	ClownFaces.Push("Big nose");
	ClownFaces.Push("Sad clown");
	ClownFaces.Push("Creeper clown");
	ClownFaces.Push("Sad/happy mask");
}

void ARuleManager::GenerateJokes()
{
	ClownJokes.Push("This is a really logn joke and must therfore be able to be fit in the box, hahahah this is stupidly long");
	ClownJokes.Push("This is a really logn joke and must therfore be able to be fit in the box, hahahah this is stupidly long2");
}

void ARuleManager::GenerateCurrentLegalElements()
{

	for (int i = 0; i < ClownHats.Num(); i++)
	{
		LegalElements.Push(ClownHats[i]);
	}

	for (int i = 0; i < ClownClothes.Num(); i++)
	{
		LegalElements.Push(ClownClothes[i]);
	}

	for (int i = 0; i < ClownFaces.Num(); i++)
	{
		LegalElements.Push(ClownFaces[i]);
	}

	for (int i = 0; i < ClownJokes.Num(); i++)
	{
		LegalJoke.Push(ClownJokes[i]);
	}

}

int ARuleManager::getRandomCategory()
{
	return FMath::RandRange(1, 4);
}

FString ARuleManager::getRandomStringEnd()
{
	FString stringEnd;

	switch (FMath::RandRange(1, 10))
	{
	case 1:
		stringEnd = " looks stupid.";
		break;
	case 2:
		stringEnd = " is WRONG.";
		break;
	case 3:
		stringEnd = " looks DUMB.";
		break;
	case 4:
		stringEnd = " is something we find completely unacceptable.";
		break;
	case 5:
		stringEnd = " cannot be allowed.";
		break;
	case 6:
		stringEnd = " is something we hate...";
		break;
	case 7:
		stringEnd = " is un-original.";
		break;
	case 8:
		stringEnd = "? Not Cool!";
		break;
	case 9:
		stringEnd = " cannot be seen in Giggleopolis.";
		break;
	case 10:
		stringEnd = " is not welcome in Giggleopolis.";
		break;
	default:
		stringEnd = " is not allowed!";
		break;
	}

	return stringEnd;
}

FString ARuleManager::getRandomStringFront()
{

	FString stringStart;

	switch (FMath::RandRange(1, 8))
	{
	case 1:
		stringStart = "This joke is unoriginal:";
		break;
	case 2:
		stringStart = "To basic:";
		break;
	case 3:
		stringStart = "We have heard this before!: ";
		break;
	case 4:
		stringStart = "This joke is overused: ";
		break;
	case 5:
		stringStart = "This joke is no longer funny: ";
		break;
	case 6:
		stringStart = "We don't accept this joke: ";
		break;
	case 7:
		stringStart = "Giggleopolis requires better jokes than: ";
		break;
	case 8:
		stringStart = "Giggleopolis does not approve of this joke: ";
		break;
	default:
		stringStart = "This joke is not allowed!: ";
		break;
	}

	return stringStart;
}

FText ARuleManager::generateRuleSentence()
{

	FString RuleResult;
	FName IllegalElement;
	FName IllegalJokename;
	FString stringEnd;
	FString stringStartJoke;

	int indexjoke;
	int indexelement;

	switch (getRandomCategory())
	{
	case 1:
		// clown element rule:

		indexelement = FMath::RandRange(0, LegalElements.Num() - 1);


		if (indexelement >= 0 && indexelement < LegalElements.Num())
		{
			IllegalElement = LegalElements[indexelement];
			LegalElements.RemoveAt(indexelement);
			IllegalElements.Push(IllegalElement);
		}

		stringEnd = getRandomStringEnd();

		RuleResult = IllegalElement.ToString() + stringEnd;

		break;
	case 2:
		// clown element rule:

		indexelement = FMath::RandRange(0, LegalElements.Num() - 1);


		if (indexelement >= 0 && indexelement < LegalElements.Num())
		{
			IllegalElement = LegalElements[indexelement];
			LegalElements.RemoveAt(indexelement);
			IllegalElements.Push(IllegalElement);
		}

		stringEnd = getRandomStringEnd();

		RuleResult = IllegalElement.ToString() + stringEnd;

		break;
	case 3:
		// clown element rule:

		indexelement = FMath::RandRange(0, LegalElements.Num() - 1);

		if (indexelement >= 0 && indexelement < LegalElements.Num())
		{
			IllegalElement = LegalElements[indexelement];
			LegalElements.RemoveAt(indexelement);
			IllegalElements.Push(IllegalElement);
		}

		stringEnd = getRandomStringEnd();

		RuleResult = IllegalElement.ToString() + stringEnd;

		break;
	case 4:
		// clown joke rule:

		indexjoke = FMath::RandRange(0, LegalJoke.Num() - 1);

		if (indexjoke >= 0 && indexjoke < LegalJoke.Num())
		{
			IllegalJokename = LegalJoke[indexjoke];
			LegalJoke.RemoveAt(indexjoke);
			IllegalJoke.Push(IllegalJokename);
		}

		stringStartJoke = getRandomStringFront();

		RuleResult = stringStartJoke + IllegalJokename.ToString();

		break;
	default:
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Eror with getCatagory"));
		break;
	}

	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, RuleResult);
	FText resultText = FText::FromString(RuleResult);
	return resultText;
}

FText ARuleManager::generateJokeSentance()
{
	return FText::FromName(ClownJokes[FMath::RandRange(0, ClownJokes.Num()-1)]);
}
